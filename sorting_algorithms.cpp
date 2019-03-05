/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdlib.h>

void init_random (int *array, unsigned long length) {
  for(unsigned long i = 0; i < length; i++) {
    array[i] = rand();
  }
}

void bubble_sort (int *array, unsigned long length) {
  bool has_changed = true;
  length -= 1;
  int swap = -1;

  do
  {
    has_changed = false;
    for(unsigned long i = 0; i < length; i++)
    {
      if(array[i] > array[i+1])
      {
        swap = array[i];
        array[i] = array[i+1];
        array[i+1] = swap;
        has_changed = true;
      }
    }
    length--;
  } while(has_changed);
}

void insertion_sort (int *array, unsigned long length) {
  int key = 0;
  unsigned long i = 0;

  for (unsigned long j = 1; j < length; j++) {
    key = array[j];
    i = j - 1;
    while (i >= 0 && array[i] > key) {
      array[i + 1] = array[i];
      i--;
    }
    array[i + 1] = key;
  }
}
