#include <stdio.h>
#include "main.h"

/**
 * print_alphabet(void) - prints the alphabets in lower case, follow by a newline
 */
void print_alphabet(void)
{
char letter;
letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
