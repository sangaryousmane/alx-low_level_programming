#include <stdio.h>
#include "main.h"

/**
* print_alphabet: prints 10 times the alphabet, in lowercase, followed by a new line. 
*/
void print_alphabet_x10(void)
{
char i; 
for (i = 'a'; i <= 'z'; i++)
{
int j;
for (j = i + 1; j < 10; j++)
{
_putchar(i);
}
_putchar('\n');
}
}
