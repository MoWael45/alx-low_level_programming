#include "main.h"

/**
 * swap_int - swap the values of two integers
 * using two input parameters
 *
 * @a : input parameter 1
 * @b : input number 2
 *
 * return : nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
