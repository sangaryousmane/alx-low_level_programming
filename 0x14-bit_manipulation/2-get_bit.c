#include "main.h"



/**
* get_bit - return the value of a bit at a given index
* @index: the index
* @n: number
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned int long int n, unsigned int index)
{
	if (n == 0 && index <= 63)
	{
		return (0);
	}
	
	while (n != 0 && index < 64)
	{
		if (index == 0)
			return ( n & 1);
		n >>= 1;
		index--;
	}
	return (-1)
}
