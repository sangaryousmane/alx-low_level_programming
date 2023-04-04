#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int index = 0, sum1 = 0, sum2 = 0;
while (index < size * size)
{
if (index % (size + 1) == 0)
{
sum1 += a[index];
}
if (index % (size - 1) == 0 && index != 0 && index != size * (size - 1))
{
sum2 += a[index];
}
index++;
}
printf("%d, %d\n", sum1, sum2);

}
