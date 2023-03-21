#include <stdio.h>
#include "main.h"

/**
** sum_of_multiples - prints the sum of the multiples of 3 and 5
*
*/

void sum_of_multiples(void)
{
int sum, i;
sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
printf("%d", sum);
_putchar('\n');
}
