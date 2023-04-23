#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_formatted_output - prints anything
* @format: the format to print
* Return: nothing
*/
void print_formatted_output(const char * const format, ...)
{
int i = 0;
char *s, *separator = "";
va_list arguments;
va_start(arguments, format);
if (format != NULL)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(arguments, int));
break;
case 'i':
printf("%s%d", separator, va_arg(arguments, int));
break;
case 'f':
printf("%s%f", separator, va_arg(arguments, double));
break;
case 's':
s = va_arg(arguments, char *);
if (s == NULL)
{
s = "(nil)";
}
printf("%s%s", separator, s);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(arguments);
}
