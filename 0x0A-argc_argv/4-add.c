#include <stdio.h>
#include <stdlib.h>

/**
* main - calculates and print sum
* @argc: count of arguments
* @argv: arguments pass
* Return: zero is successful, otherwise 1 for error
*/
int main(int argc, char *argv[])
{
int i = 1, j;
int sum = 0;

while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
sum = sum + atoi(argv[i]);
i++;
}
printf("%d\n", sum);
return (0);
}
