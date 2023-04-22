#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by a newline
* @separator: the string of characters to printer btw nums
* @n: number integers passed to the function
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list(numbers);
unsigned int i = 0;
va_start(numbers, n);

for (; i < n; i++)
{
printf("%d", va_arg(numbers, int));

int end;
end = n - 1;
if (i != end && separator != NULL)
{
printf("%s", separator);
}
}
_putchar('\n');
va_end(numbers);
}
