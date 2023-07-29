#include "main.h"



/**
* get_bit - return the value of a bit at a given index
* @index: the index
* @n: number
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);
	n >>= index;
	if ((n & 1) == 1)
	return (1);
	else
	return (0);
}
