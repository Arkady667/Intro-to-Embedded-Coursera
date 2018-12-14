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
 * @brief Program, which perform operations on data inside "test" array
 *
 * <Add Extended Description Here>
 *
 * @author Arkadiusz Czuba
 * @date 13.12.2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char mean = 0;
  unsigned char max = 0;
  unsigned char median = 0;

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  sort_array(test, SIZE);
  mean = find_mean(test, SIZE);
  max  = find_maximum(test, SIZE);
  median = find_median(test, SIZE);

  //sorted_test = sorted_array(test, SIZE);

  printf("mean %d\n", mean);
  printf("max %d\n", max);


  // print array
  printf("sorted\n");
  for (int i = 0; i < SIZE; ++i)
  {
  	printf("%d ", test[i]);
  }

  printf("median %d\n", median);
  

}

/* Add other Implementation File Code Here */

unsigned char find_median(unsigned char *data, unsigned int array_size){

	unsigned int value = 0;

	if (array_size % 2 == 0){
		value = (data[array_size/2]-1 + data[array_size/2])/2;
	}
	else {
		value = data[array_size/2];
	}

	return (unsigned char)value;
}
												
unsigned char find_mean(unsigned char *data, unsigned int array_size){

	unsigned int sum = 0;
	unsigned int value = 0;

	for (int i = 0; i < array_size; i++)
	{
		sum = sum + data[i];
		printf("%d\n", sum);
	}

	value = sum/array_size;

	printf("value %d\n", sum);

	return (unsigned char)value;
}

unsigned char find_maximum(unsigned char *data, unsigned int array_size){

	unsigned int value = 0;

	for (int i = 1; i <= array_size; i++)
	{	
	
		if (value < data[i-1] ){
			value = data[i-1];
		}
		
		printf("%d\n", value);
	}

	return (unsigned char)value;
}

//unsigned char sort_array(unsigned char *data, unsigned int array_size){
void sort_array(unsigned char *arr, unsigned int n) { 

   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       j = i-1; 
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           j = j-1; 
       } 
       arr[j+1] = key; 
   }

} 

void print_statistics(){


	return 0;
}

void print_array(){


	return 0;
}

