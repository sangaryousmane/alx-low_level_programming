#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char n;
int num;
for (num = 0; num < 10; num++)
{
putchar(num);
}

for (n = 'a'; n < 'g'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
