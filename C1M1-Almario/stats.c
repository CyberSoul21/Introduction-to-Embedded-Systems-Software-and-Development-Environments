/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_statistics(test,SIZE);
  print_array(test,SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *data,int lenght)
{
  float median = 0, mean = 0, max=0, min = 0;
  /*Copy array in other array for change the type data char to int*/
  /*the reason to do this is for not modificate the original array*/
  unsigned int data_int[lenght];
  for(int i = 0; i < lenght; i++)
  {
    data_int[i] = data[i];
  }
  median = find_median(data_int,SIZE);
  printf("Median = %f\n",median);
  mean = find_mean(data,SIZE);
  printf("Mean = %f\n",mean);
  min = find_minimum(data,SIZE);
  printf("Minimum = %f\n",min);
  max = find_maximum(data,SIZE);
  printf("Maximum = %f\n",max);
  sort_array(data,lenght);

}

float find_median(unsigned int *data,int lenght)
{

  int pos = 0, flag =0;
  float m = 0, x = 0, y = 0;
  for(int k = 0; k < lenght; k++)
  {
      x = data[k];
      for(int i = k; i<lenght; i++)
      {
        if(data[i]<x)
        {
          x = data[i];
          pos = i;
          flag = 1;
        }
      }
      if(flag == 1)
      {
        y = data[k];
        data[k]=x;
        data[pos]=y;
        flag = 0;
      }
  }
  /*check if lenght of array is odd or even*/
  if(lenght%2 == 0){
    float k,z;
    k=data[((lenght)/2) - 1];
    z=data[(lenght/2)];
    m =  (k+z)/2;
  }
  else{
  //  m = data[lenght/2 + 1];
  }
  return m;
}
float find_mean(unsigned char *data,int lenght)
{
  float m=0,d=0;
  for(int i = 0; i < lenght; i++)
  {
    d += data[i];
  }
  m = d/lenght;
  return m;
}
float find_maximum(unsigned char *data,int lenght)
{
  float max = data[0];
  for(int i = 0; i < lenght; i++)
  {
    if(data[i]>max)
    {
      max = data[i];
    }
  }
  return max;
}
float find_minimum(unsigned char *data,int lenght)
{
  float min = data[0];
  for(int i = 0; i < lenght; i++)
  {
    if(data[i]<min)
    {
      min = data[i];
    }
  }
  return min;
}

void sort_array(unsigned char *data,int lenght){

  int x = 0, y = 0, pos = 0, flag =0;
  for(int k = 0; k < lenght; k++)
  {
      x = data[k];
      for(int i = k; i<lenght; i++)
      {
        if(data[i]>x)
        {
          x = data[i];
          pos = i;
          flag = 1;
        }
      }
      if(flag == 1)
      {
        y = data[k];
        data[k]=x;
        data[pos]=y;
        flag = 0;
      }
  }

}
void print_array(unsigned char *data,int lenght)
{
  for(int i = 0; i < lenght; i++)
  {
    int d = data[i];
    printf("%d \n",d);
  }
}
