#include <stdio.h>

/**
 * main - prints num of arguments
 * @argc: argument count
 * @argv: actual arguments, a poiner
 * Return: zero if successful
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
