#include "main.h"


/**
* binary_to_uint - converts a binary to an unsigned int
* @b: the binary num
* Return: the converted integer
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNum = 0;
	int i;

	if (b != NULL)
	{
		for (i = 0; b[i] != '0'; i++)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
			else
			{
				decimalNum = (decimalNum * 2) + (b[i] - '0');
			}
		}
	}
	else
	{
		return (0);
	}
	return (decimalNum);

}

