#include "main.h"

/**
* get_endianness - get the endianness of system
* Return: 0 if big endiane, 1 if little endiane
*
*/
int get_endianness(void)
{
int i = 1;
char *p = (char *)&i;
return (*p == 1);
}
