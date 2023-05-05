#include "main.h"


/**
* binary_to_uint - converts a binary number to an int
* @b: binary number
* Return: converted number, otherwise 0 if character isn't 0 or 1
* also return 0 if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal = 0;
int i = 0;
if (b != NULL)
{
while (b[i] != '\0')
{

/* 48 is the ASCII of 0 and 49 is the ASCII of 1 */
if (b[i] != 48 && b[i] != 49)
{
return (0);
}
else
{
decimal = decimal * 2 + (b[i] - 48);
}
i++;
}
}
else
{
return (0);
}
return (decimal);
}
