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
 * @brief This file include Declarations and documentations
 *
 * This file include and documentations for each function.
 *
 * @author Wilson Javier Almario
 * @date 29-09-2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will call other functions to compute median, mean, maximum, minimum and sort the array where
 * the position zeroth will have the maximum value and the last position will have the smallest value.
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained a set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return prints in console maximun, minimum, mean, median and sorts the array.
 */
void print_statistics(unsigned char *data,int lenght);

/**
 * @brief Prints the array to the screen
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will use a bucle "for" for prints the values
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained the set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return prints each value in the array in console.
 */
void print_array(unsigned char *data,int lenght);

/**
 * @brief compute the median of a set of data
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will compute median and return a floating value
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained the set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return a floating value.
 */
float find_median(unsigned int *data,int lenght);

/**
 * @brief compute the mean of a set of data
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will compute mean and return a floating value
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained the set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return a floating value.
 */
float find_mean(unsigned char *data,int lenght);


/**
 * @brief compute the maximum of a set of data
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will compute maximum and return a floating value
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained the set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return a floating value.
 */
float find_maximum(unsigned char *data,int lenght);

/**
 * @brief compute the minimum of a set of data
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will compute minimum and return a floating value
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained the set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return a floating value.
 */
float find_minimum(unsigned char *data,int lenght);


/**
 * @brief compute the minimum of a set of data
 *
 * This function takes as an input a unsigned char pointer to an n-element data array and 32-bit integer.
 * This will sorts the array from largest to smallest. (The zeroth Element should be the largest value,
 * and the last element (n-1) should be the smallest value. )
 *
 * @param unsigned char pointer this pointer to an n-element data array that contained the set of data
 * @param <integer lenght  the lenght of the array.
 *
 * @return this function doesn't returns anything but sorts the array.
 */
void sort_array(unsigned char *data,int lenght);


#endif /* __STATS_H__ */
