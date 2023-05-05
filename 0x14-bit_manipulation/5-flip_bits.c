#include "main.h"

/**
* flip_bits - number of bits to flip to get from one number to another.
* @n: number 1
* @m: number 2
* Return: number bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num_of_bits = 0;
unsigned long int diff = n ^ m;
while (diff)
{
num_of_bits += diff & 1;
diff >>= 1;
}
return (num_of_bits);
}
