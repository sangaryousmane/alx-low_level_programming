#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - returns the sum of all its parameters
* @n: the size of the v-function
* Return: the sum of all the arguments passed
*/
int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
unsigned int i = 0;
int total = 0;
va_start(numbers, n);

if (n > 0)
{
for (; i < n; i++)
{
total = total + va_arg(numbers, int);
}
va_end(numbers);
}
return (total);
}
