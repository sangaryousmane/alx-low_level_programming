#include <stdio.h>
#include <stdlib.h>
/**
* main - multiples two numbers and print the product
* @argc: commandline count
* @argv: arguments pass
* Return: zerro is successful
*/
int main(int argc, char *argv[])
{
int product = 0;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
product = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
return (0);
}
