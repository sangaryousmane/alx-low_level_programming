#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int index = 0;
int sum1 = 0, sum2 = 0;
while (index < size)
{
sum1 += a[index];
a += size;
index++;
}
a -= size;
index = 0;
while (index < size)
{
sum2 += a[index];
a -= size;
index++;
}
printf("%d, %d\n", sum1, sum2);
}
