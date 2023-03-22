#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
int i;
i = 0;

while (i <= n)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
