#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - is the entry point to generate a random password
 * Return: the password after generation
 */
int main(void)
{
char c;
int i;

srand(time(0));
while (i <= 2645)
{
c = rand() % 128;
i += c;
putchar(c);
}
putchar(2772 - i);
return (0);
}
