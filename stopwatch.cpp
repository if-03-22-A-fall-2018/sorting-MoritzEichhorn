/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: 16
 * File:			stopwatch.cpp
 * Author(s):		Eichhorn Moritz
 * Due Date:		10.3.2019
 *-----------------------------------------------------------------------------
 * Description:
 * Normal stopwatch.
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
