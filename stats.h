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
#ifndef __STATS_H__
#define __STATS_H__



/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */



/**
 * @brief Reverses the byte order of an unsigned 32-bit integer
 *
 * This function takes as an input a 32-bit integer. This will
 * reverse the byte order of the full word. Instead of changing the
 * parameter passed it, int returned a reversed unsigned 32-bit
 * integer. 
 *
 * @param word : The 32-bit word to be reversed
 * @return The reversed 32-bit value word
 */
unsigned int swap32(unsigned int word);

// Function declarations

unsigned char find_median(unsigned char *data, unsigned int array_size);  //Podaje wskaznik na tablie
																		// By zaoszczedzic pamiec
unsigned char find_mean(unsigned char *data, unsigned int array_size);

unsigned char find_maximum(unsigned char *data, unsigned int array_size);

void sort_array(unsigned char *arr, unsigned int n);

void print_statistics();

void print_array(); 

#endif /* __STATS_H__ */