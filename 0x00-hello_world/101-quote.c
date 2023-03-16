#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int STDOUT_FILENO = 59;
fwrite(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", STDOUT_FILENO);
return (1);
}
