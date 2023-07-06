#include "main.h"


/**
* get_endianness - checks the endianness
* Return: nothing
*/
int get_endianness(void)
{
	int end = 1;
	char *ptr = (char *) &end;

	return (*ptr == 1);
}
