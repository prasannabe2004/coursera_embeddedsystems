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
 * @file stats.c 
 * @brief Main file to invoke the statistics of given array
 *
 * This is the main file to invoke the function is print statistics of the 
 * array and sorts the array from largest to smallest
 *
 * @author <Prasanna Padmanaban>
 * @date <05/04/2022>
 *
 */

#include <stdio.h>
#include "stats.h"

unsigned char find_mean(unsigned char *ptr, unsigned int size)
{
  int sum = 0;
  int mean = 0;
  for(int i = 0 ; i < size; i++)
  {
    sum += ptr[i];
  }
  mean = sum/size;
  return mean;
}

unsigned char find_median(unsigned char *ptr, unsigned int size)
{
  int is_even = size%2;
  int median = 0;
  if(is_even)
    median = (ptr[size/2] + ptr[size/2+1])/2.0; 
  else
    median = ptr[size/2 + 1];
  return median;
}

unsigned char find_maximum(unsigned char *ptr, unsigned int size)
{
  return ptr[0];
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size)
{
  return ptr[size-1];
}

void print_array(unsigned char *ptr, unsigned int size)
{
  for(int i = 0; i < size; i++)
  {
    printf("%d ", ptr[i]);
  }
  printf("\n");
  return;
}

void sort_array(unsigned char *ptr, unsigned int size)
{
  for(int i = 0; i < size; i++)
  {
    for (int j = i+1 ; j < size; j++)
    {
      if(ptr[j] > ptr[i])
      {
        int temp = 0;
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
      }
    }
  }
  return;
}

void print_statistics(unsigned char *ptr, unsigned int size)
{
  sort_array(ptr, size);
  printf("Mean\t\t:%d\n",find_mean(ptr, size));
  printf("Median\t\t:%d\n",find_median(ptr, size));
  printf("Maximum\t\t:%d\n",find_maximum(ptr, size));
  printf("Minimum\t\t:%d\n",find_minimum(ptr, size));
  return;
}

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
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
