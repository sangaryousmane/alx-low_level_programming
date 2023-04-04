#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: pointer to a 2D array
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
for (; i < 8; i++)
{
for (; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\0');
}
}
