#include <stdio.h>
/**
 * main - implement our fizzbuzz algorithm
 * Return: Always 0.
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s ", "Fizzbuzz ");
}
else if (i % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s ", "Buzz");
}

else
{
printf("%d ", i);
}
}

}
