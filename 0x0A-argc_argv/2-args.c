#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: the argument count
* @argv: a double pointer to the arguments
* Return: zero when successful
*/
int main(int argc, char **argv[])
{
int i = 1;

for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
