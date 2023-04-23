#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_strings - prints strings, followed by a newline
* @separator: the string to print
* @n: the number of strings passed as arguments
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *s;
unsigned int counter = 0;
va_start(strings, n);

for (; counter < n; counter++)
{
s = va_arg(strings, char *);
switch (s != NULL)
{
case 1:
printf("%s", s);
break;

case 0:
printf("(nil)");
break;
}
if (counter != (n - 1) && separator)
{
printf("%s", separator);
}
}
printf("\n");
va_end(strings);
}
