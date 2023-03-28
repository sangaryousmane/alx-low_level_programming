#include "main.h"
/**
* _atoi - convert a string to an int
* @s: the string to be converted
* Return: the converted int
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int number = 0, result;
do {
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
number = number * 10 + (*s - '0');
}
else if (number > 0)
{
break;
}
} while (*s++);
result = (sign)*(number);
return (result);
}
