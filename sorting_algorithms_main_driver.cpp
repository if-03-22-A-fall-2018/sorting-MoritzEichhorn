/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: 16
 * File:			compare_sorts_main.c
 * Author(s):		Eichhorn Moritz
 * Due Date:		10.3.2019
 *-----------------------------------------------------------------------------
 * Description:
 * Compares the sorts(BubbleSort and InsertionSort) and prints the resulsts
 * to the console.
 *-----------------------------------------------------------------------------
*/

/**
*** @file sorting_algorithms_main_driver.cpp
*** @brief File with main function built if <code>make</code> is called
*** @details <code>make</code> makes an executable by linking the main
*** function of this file. This function has to call the sorting algorithms on
*** arrays of the sizes as defined below.
*/

#include <stdio.h>
#include <string.h>

#include "stopwatch.h"
#include "sorting_algorithms.h"

#define HUGE			65535	// 2^16
#define VERY_LARGE 		16384	// 2^14
#define LARGE			8192	// 2^13
#define MIDDLE			4096	// 2^12
#define SMALL			2048	// 2^11
#define VERY_SMALL		1024	// 2^10
#define TINY			256 	// 2 ^8

enum Sort {
  BubbleSort,
  InsertionSort
};

float getTime(int* array, unsigned long length, Sort crnt_sort) {
  if(crnt_sort == BubbleSort) {
    start_stopwatch();
    bubble_sort(array, length);
    return elapsed_time();
  }
  else
  {
    start_stopwatch();
    insertion_sort(array, length);
    return elapsed_time();
  }
}

int main(int argc, char const *argv[]) {
  int test_data[HUGE];
  init_random(test_data, HUGE);
  int a_huge[HUGE];
  int a_very_large[VERY_LARGE];
  int a_large[LARGE];
  int a_middle[MIDDLE];
  int a_small[SMALL];
  int a_very_small[VERY_SMALL];
  int a_tiny[TINY];

  printf("Algorithm\tTiny\t\tV_Small\t\tSmall\t\tMiddle\t\tLarge\t\tV_Large\t\tHuge\n");

  Sort sort = BubbleSort;

  for (size_t i = 0; i < 2; i++) {
    memcpy(a_huge, test_data, sizeof(int) * HUGE);
    memcpy(a_very_large, test_data, sizeof(int) * VERY_LARGE);
    memcpy(a_large, test_data, sizeof(int) * LARGE);
    memcpy(a_middle, test_data, sizeof(int) * MIDDLE);
    memcpy(a_small, test_data, sizeof(int) * SMALL);
    memcpy(a_very_small, test_data, sizeof(int) * VERY_SMALL);
    memcpy(a_tiny, test_data, sizeof(int) * TINY);

    if(sort == BubbleSort) {
      printf("BubbleSort\t");
    } else {
      printf("InsertionSort\t");
    }

    printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\n",getTime(a_tiny, TINY, sort),getTime(a_very_small, VERY_SMALL, sort),getTime(a_small, SMALL, sort),getTime(a_middle, MIDDLE, sort),getTime(a_large, LARGE, sort),getTime(a_very_large, VERY_LARGE, sort),getTime(a_huge, HUGE, sort));
    sort = InsertionSort;
  }
}


/*
* Suggestion how to initialize the arrays which must be sorted with test data.
* 1. Create a array of size HUGE and initialize it with random data.
* 2. Copy from this array as many elements as needed into the seven target directories
*     (to make this efficiently, consider to use the function memcpy() of string.h).
*/
