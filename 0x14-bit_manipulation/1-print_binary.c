#include "main.h"


/**
* print_binary - print binary with requirements
* @n: the number to print
* Return: nothing
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	unsigned long int  mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	int isFalse = 0;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			isFalse = 1;
		}
		else if (isFalse)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

}
