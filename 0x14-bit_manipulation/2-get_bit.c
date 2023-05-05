#include "main.h"

/**
* get_bit - get the value of a bit at a given index.
* @n: value
* @index: the index
* Returns: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index) {
if (n == 0 && index < 64)
{
return 0;
}
while (index <= 63 && n != 0)
{
if (index == 0)
{
return n & 1;
}
n >>= 1;
index--;
}
return -1;
}
