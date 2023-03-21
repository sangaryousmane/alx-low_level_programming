#include <stdio.h>
#include "main.h"

/**
 * alphabet() - returns the alphabets in lower case
 *
 * Return: returns void (meaning it returns nothing)
 */

void print_alphabet()
{
char letter;
letter = 'a';

while (letter <='z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}
