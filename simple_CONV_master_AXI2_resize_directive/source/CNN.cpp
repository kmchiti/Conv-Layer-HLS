#include "CONV.h"


char relu(char x){
#pragma HLS inline
	return x>0 ? x : 0;
}

void CONV(
   const char input_img[CONV1_input_size*CONV1_input_size],
   const char kernel[CONV1_kernel_size*CONV1_kernel_size],
   const char bias,
   const bool init,
   char output_img[CONV1_output_size*CONV1_output_size])
{
	
	char IBRAM[CONV1_input_size][CONV1_input_size];
	char OBRAM[CONV1_output_size*CONV1_output_size];
	char biasBRAM;
	char WBRAM[CONV1_kernel_size][CONV1_kernel_size];

	//initial loop variable
	char i,j=0;//for CONV1_input_size<255
	char m,n=0;//for CONV1_kernel_size<15
	int k=0;//for CONV1_output_size*CONV1_output_size<65536

	//copy input
	for(i=0;i<CONV1_input_size;i++){
		for(j=0;j<CONV1_input_size;j++){
		#pragma HLS PIPELINE II=1
			IBRAM[i][j] = input_img[i*CONV1_input_size +j];
		}
	}

	//kernels and bias
	if(init){
		for(m=0;m<CONV1_kernel_size;m++){
			for(n=0;n<CONV1_kernel_size;n++){
			#pragma HLS PIPELINE II=1
				WBRAM[m][n] = kernel[m*CONV1_kernel_size+n];
			}
		}
		biasBRAM=bias;
	}

	//////////////////////////////////////////////////////////////////////
	//						   Convolution								//
	//////////////////////////////////////////////////////////////////////
	for(m=0;m<CONV1_kernel_size;m++){
		for(n=0;n<CONV1_kernel_size;n++){
			for (i = 0; i < CONV1_output_size; i++) {
				for (j = 0; j < CONV1_output_size; j++) {
				#pragma HLS PIPELINE II=1
					char input_pixel = IBRAM[i+m][j+n];
					char temp = (input_pixel*WBRAM[m][n])>>8;
						if(m==0&&n==0)
							OBRAM[i*CONV1_output_size+j] = temp;
						else
							OBRAM[i*CONV1_output_size+j] += temp;
				}
			}
		}
	}

	//copy_output
	for(k=0;k<CONV1_output_size*CONV1_output_size;k++){
	#pragma HLS PIPELINE II=1
		output_img[k]=relu(OBRAM[k]+biasBRAM);
	}

}

void POOL(
   const char input_img[POOL1_input_size*POOL1_input_size],
   const bool pooling_type,
   const bool init,
   char output_img[POOL1_output_size*POOL1_output_size])
{

	char IBRAM[POOL1_input_size][POOL1_input_size];
	char OBRAM[POOL1_output_size*POOL1_output_size];

	//initial loop variable
	char i,j=0;//for POOL1_input_size<255
	char m,n=0;//for POOL1_kernel_size<15
	int k=0;//for POOL1_output_size*POOL1_output_size<65536

	//copy input
	for(i=0;i<POOL1_input_size;i++){
		for(j=0;j<POOL1_input_size;j++){
		#pragma HLS PIPELINE II=1
			IBRAM[i][j] = input_img[i*POOL1_input_size +j];
		}
	}

	///////////////////////////////////////////////////////////////////
	//						   Pooling				       	    	 //
	///////////////////////////////////////////////////////////////////
	for (i = 0; i < POOL1_output_size; i++) {
		for (j = 0; j < POOL1_output_size; j++) {
			if(pooling_type==MAXPOOL){
				char max=0;
				for(m=0;m<POOL1_kernel_size;m++){
					for(n=0;n<POOL1_kernel_size;n++){
					#pragma HLS PIPELINE II=1
						char input_pixel = IBRAM[i*POOL1_kernel_size+m][j*POOL1_kernel_size+n];
						if(input_pixel>max)
							max=input_pixel;
					}
				}
				OBRAM[i*POOL1_output_size+j]=max;
			}
		}
	}

	//copy_output
	for(k=0;k<POOL1_output_size*POOL1_output_size;k++){
	#pragma HLS PIPELINE II=1
		output_img[k]=OBRAM[k];
	}

}

void acc(const char input_img1[CONV1_output_size*CONV1_output_size],
   const char input_img2[CONV1_output_size*CONV1_output_size],
   char output_img[CONV1_output_size*CONV1_output_size])
{
	//initial loop variable
	char i=0;//for CONV1_output_size<255

	for(i=0;i<CONV1_output_size*CONV1_output_size;i++){
		/*cout<<input_img1[i]<<"    "<<input_img2[i]<<"\n";
		if(input_img1[i]+input_img2[i]>500){
			output_img[i]=500;
		}
		else*/
			output_img[i]=input_img1[i]+input_img2[i];
		//cout<<input_img1[i]<<"    "<<input_img2[i]<<"    "<<output_img[i]<<"\n";
	}
}


void CNN(
   volatile char *img_port,
   const char kernel[CONV1_input_depth*CONV1_kernel_size*CONV1_kernel_size],
   const char bias[CONV1_kernel_depth])
{
	#pragma HLS INTERFACE m_axi port=img_port

	char buff_input_img[CONV1_input_size*CONV1_input_size];
#pragma HLS RESOURCE variable=buff_input_img core=RAM_2P_BRAM
	char buff_output_img[CONV1_output_size*CONV1_output_size];
	char buff_result_img[CONV1_output_size*CONV1_output_size];

	//initial loop variable
	char i,j=0;//for depth<255

	CNN_label0:for(i=0;i<CONV1_input_depth;i++){
		CNN_label1:for (j=0;j<CONV1_kernel_depth;j++){
			cout<<"img"<<i<<" & kerel"<<j<<"\n";
			if(i==0){
				//read input img
				memcpy(buff_input_img , (const char*)img_port+i*offset_single_input_img+offset_input_img , sizeof(buff_input_img));
				//convolv
				CONV(buff_input_img,kernel+(j*CONV1_kernel_size*CONV1_kernel_size)+(i*CONV1_kernel_depth*CONV1_kernel_size*CONV1_kernel_size),bias[i*CONV1_kernel_depth+j],1,buff_output_img);
				//write back result
				memcpy((char *)img_port+j*offset_single_output_img+offset_feature_map , buff_output_img , sizeof(buff_output_img));
				cout<<"writing on:"<<(char *)img_port+j*offset_single_output_img+offset_feature_map<<"\n";
			}
			else{
				//read input img
				memcpy(buff_input_img , (const char*)img_port+i*offset_single_input_img+offset_input_img , sizeof(buff_input_img));
				//read last result
				memcpy(buff_result_img , (const char*)img_port+j*offset_single_output_img+offset_feature_map , sizeof(buff_result_img));
				cout<<"reading last result from:"<<(const char*)img_port+j*offset_single_output_img+offset_feature_map<<"\n";
				//convolv
				CONV(buff_input_img,kernel+(j*CONV1_kernel_size*CONV1_kernel_size)+(i*CONV1_kernel_depth*CONV1_kernel_size*CONV1_kernel_size),bias[i*CONV1_kernel_depth+j],1,buff_output_img);
				//accumulate
				acc(buff_result_img,buff_output_img,buff_output_img);
				//write back result
				memcpy((char *)img_port+j*offset_single_output_img+offset_feature_map , buff_output_img , sizeof(buff_output_img));
				cout<<"writing on:"<<(char *)img_port+j*offset_single_output_img+offset_feature_map<<"\n";

			}
			cout<<"_______________________________\n";
		}
	}

}
