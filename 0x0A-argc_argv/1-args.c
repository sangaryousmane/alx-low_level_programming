#include <stdio.h>

/**
 * main - prints num of arguments
 * @argc: argument count
 * @argv: actual arguments, a poiner
 * Return: zero if successful
 */
int main(int argc, char *argv[])
{
int num_of_args = argc - 1;
printf("%d\n", num_of_args);
return (0);
}
