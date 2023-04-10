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
int coins[5] = {25, 10, 5, 2, 1};
int amount = atoi(argv[1]);
int numCoins = 0;
int i;
if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}

for (i = 0; i < 5; i++)
{
while (amount >= coins[i])
{
amount -= coins[i];
numCoins++;
}
}
printf("%d\n", numCoins);
return (0);
}
