/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

clock_t start_time;
clock_t crnt_time;

void start_stopwatch () {
  start_time = clock();
}

void stop_stopwatch () {
  
}

float elapsed_time () {
  crnt_time = clock();
  return (float)(crnt_time-start_time) / CLOCKS_PER_SEC;
}
