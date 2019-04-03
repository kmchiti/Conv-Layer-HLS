#include "CONV.h"
#include"image_convolution_sw.h"
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int* out = (int*) malloc(CONV1_kernel_depth*CONV1_output_size*CONV1_output_size*sizeof(int));


//int* in = (int*) malloc((CONV1_kernel_depth*CONV1_output_size*CONV1_output_size+CONV1_input_depth*CONV1_input_size*CONV1_input_size)*sizeof(int));
int* in;
int* w;
int* b;



int main(int argc, char **argv)
{
	in=image();
	w=weight();
	b=bias();

	cout<<"start hardware\n";
		CNN(in,w,b);

	cout<<"hardware done!\n";


    return 0;
}
