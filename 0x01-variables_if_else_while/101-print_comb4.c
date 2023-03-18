#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 10; i++)
{
for (j = i + 1; j <= 10; j++)
{
for (k = j + 1; k <= 10; k++)
{
if (j == 9 && j == 8 && k == 7)
{
continue;
}
}
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
