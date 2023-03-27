#include "main.h"

/**
* swap_int - swaps two numbers
* Return nothing
* @a: first argument
* @b: second argument
*/
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
