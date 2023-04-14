#include "main.h"
#include <stdlib.h>
#define ERR_MSG "Error"
int _isdigit(char *s);

/**
 * main - takes two numbers as input and multiply them
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: non-zero if fail and 0 if successing
 */
int main(int argc, char *argv[])
{
int i = 0;
if (argc != 3)
{
while (ERR_MSG[i] != '\0')
{
putchar(ERR_MSG[i]);
}
putchar(10);
exit(98);
}
if (_isdigit(argv[1]) == 0)
{
printf("%s\n", argv[1]);
}
return (0);
}

/**
* _isdigit - checks for digit
* @s: the string to be checked
* Return: 1 if @s is a digit, otherwise 0.
*/
int _isdigit(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
{
return (1);
}
s++;
}
return (0);
}

