#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include "ap_cint.h"
#include <cmath>
using namespace std;
   
#define CONV1_input_size 100// max 255
#define CONV1_input_depth 3// max 15
#define CONV1_kernel_size 3// max 15
#define CONV1_kernel_depth 8// max 15
#define CONV1_output_size 98// max 255

#define offset_input_img 0
#define offset_single_input_img CONV1_input_size*CONV1_input_size
#define offset_single_output_img CONV1_output_size*CONV1_output_size
#define offset_feature_map CONV1_input_depth*offset_single_input_img
/////////////////////////////////////////////////////////////////////////////////

#define POOL1_input_size 8// max 255
#define POOL1_input_depth 3// max 15
#define POOL1_kernel_size 2// max 15
#define POOL1_output_size 4// max 255
#define MAXPOOL 1

//typedef ap_int<6> dinA_t;

char relu(char x);

void CONV(
   const char input_img[CONV1_input_size*CONV1_input_size],
   const char kernel[CONV1_kernel_size*CONV1_kernel_size],
   const char bias,
   const bool init,
   char output_img[CONV1_output_size*CONV1_output_size]);
   
void POOL(
   const char input_img[POOL1_input_size*POOL1_input_size],
   const bool pooling_type,
   const bool init,
   char output_img[POOL1_output_size*POOL1_output_size]);

void acc(const char input_img1[CONV1_output_size*CONV1_output_size],
   const char input_img2[CONV1_output_size*CONV1_output_size],
   char output_img[CONV1_output_size*CONV1_output_size]);

void CNN(
   volatile char *img_port,
   const char kernel[CONV1_input_depth*CONV1_kernel_size*CONV1_kernel_size],
   const char bias[CONV1_kernel_depth]);
