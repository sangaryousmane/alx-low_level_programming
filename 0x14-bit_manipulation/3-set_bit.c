#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @index: is the index, starting from 0 of the bit you want to set
* @n: an integer pointer
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1;
if (index > 63)
{
return (-1);
}
mask <<= index;
if ((*n & mask) == 0)
{
*n |= mask;
}
return (1);
}
