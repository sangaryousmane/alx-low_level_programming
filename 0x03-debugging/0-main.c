#include "main.h"
#include <stdio.h>

/**
* test_positive_negative - test for positive or negative value
* Return: 0
*/
int test_positive_negative(void)
{
int value;
if (positive_or_negative(value) > 0)
{
printf("%d is positive", value);
}
if (positive_or_negative(value) == 0)
{
printf("%d is zero", value);
}
else
{
printf("%d is negative", value);
}
return (0);
}
