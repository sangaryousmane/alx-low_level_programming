#include "main.h"



/**
* flip_bits - num of bits to flip
* @n: num 1
* @m: num 2
* Return: return the number of bits on success
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int bts = 0;


	while (difference)
	{

		bts += difference  & 1;
		difference >>= 1;

	}
	return (bts);
}
