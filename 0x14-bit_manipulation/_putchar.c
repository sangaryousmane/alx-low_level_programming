#include "main.h"


/**
* _putchar - prints a char equivalent
* @c: input character
* Return: character
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
