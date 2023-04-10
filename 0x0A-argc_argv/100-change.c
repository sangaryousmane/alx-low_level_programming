#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: arguments entered
 * Return: zero if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
int coins = 0, cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
for (; cents > 0; coins++)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cents >= 10)
{
cents -= 10;
}
else if (cents >= 5)
{
cents -= 5;
}
else if (cents >= 1)
{
cents -= 1;
}
}
printf("%d\n", coins);
return (0);
}
