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
 * @file stats.h 
 * @brief Have all functiona declarations needed for finding the statistics
 *
 * Mean - Average of array elements
 * Media - Median of array elements
 * Maximum - Maximum of array elements
 * Minimum - Mininum of array elements
 * Sort - Sort the input array from largest to smallest
 * Print - Prints the given array elements
 *
 * @author <Prasanna Padmanaban>
 * @date <05/04/2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Find the mean of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return Returns the mean of the given input values in array
 */
unsigned char find_mean(unsigned char *ptr, unsigned int size);

/**
 * @brief Find the median of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return <eturns the median of the given input values in array
 */
unsigned char find_median(unsigned char *ptr, unsigned int size);


/**
 * @brief Find the maximum of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return Returns the maximum of the given input values in array
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size);


/**
 * @brief Find the minimum of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return Returns the minimum of the given input values in array
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int size);

/**
 * @brief Prints the elements of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return None
 */
void print_array(unsigned char *ptr, unsigned int size);

/**
 * @brief Sorts(increasing order) the elements of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return None
 */
void sort_array(unsigned char *ptr, unsigned int size);

/**
 * @brief Prints statistics of the given input set
 *
 *
 * @param <ptr> Pointer to input array
 * @param <size> size of the input set or number of elements in the array
 *
 * @return None
 */
void print_statistics(unsigned char *ptr, unsigned int size);

#endif /* __STATS_H__ */
