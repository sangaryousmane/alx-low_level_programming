#include <stdlib.h>
#include "main.h"
/**
* argstostr - concatenates all the arguments of your program.
* @ac: arguments counts
* @av: arguments
* Return: concation of all arguments
*/
char *argstostr(int ac, char **av)
{
char *arg_str;
int total_len = 0, arg_index = 0, char_index = 0, str_index = 0;
if (ac == 0)
{
return (NULL);
}
while (arg_index < ac)
{
if (av[arg_index] == NULL)
{
return (NULL);
}
while (av[arg_index][char_index] != '\0')
{
total_len++;
char_index++;
}
total_len++;
arg_index++;
char_index = 0;
}
arg_str = malloc((total_len + 1) * sizeof(char));
if (arg_str == NULL)
{
return (NULL);
}
arg_index = 0;
str_index = 0;
while (arg_index < ac)
{
if (av[arg_index] == NULL)
{
return (NULL);
}
while (av[arg_index][char_index] != '\0')
{
arg_str[str_index] = av[arg_index][char_index];
str_index++;
char_index++;
}
arg_str[str_index] = '\n';
str_index++;
arg_index++;
char_index = 0;
}
arg_str[str_index] = '\0';
return (arg_str);
}
