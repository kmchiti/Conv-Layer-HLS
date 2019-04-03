#include "CONV.h"

int8 sw_relu(int8 x){
	return x>0 ? x : 0;
}

int8 * image( ) {

   static int8  r[CONV1_kernel_depth*CONV1_output_size*CONV1_output_size+CONV1_input_depth*CONV1_input_size*CONV1_input_size];
   for(int i=0 ; i<CONV1_input_depth ; i++){
   		for(int j=0;j<CONV1_input_size*CONV1_input_size;j++){
   			r[i*CONV1_input_size*CONV1_input_size+j]=rand()%100;
   		}
   	}

   return r;
}


int8 * weight( ) {

   static int8  r[CONV1_input_depth*CONV1_kernel_depth*CONV1_kernel_size*CONV1_kernel_size];
   for(int i=0 ; i<CONV1_input_depth ; i++){
	   for(int j=0;j<CONV1_kernel_depth;j++){
			for(int k=0;k<CONV1_input_size*CONV1_input_size;k++){
				r[i*CONV1_kernel_depth*CONV1_input_size*CONV1_input_size+j*CONV1_input_size*CONV1_input_size+k]=rand()%100;
			}
	   }
   	}

   return r;
}


int8 * bias( ) {

   static int8  r[CONV1_input_depth*CONV1_kernel_depth];
   for(int i=0 ; i<CONV1_input_depth ; i++){
	   for(int j=0;j<CONV1_kernel_depth;j++){
				r[i*CONV1_kernel_depth+j]=rand()%1;
	   }
   	}

   return r;
}

