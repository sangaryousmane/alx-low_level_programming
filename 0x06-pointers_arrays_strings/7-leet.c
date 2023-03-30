#include <stdio.h>
#include "main.h"
/**
* leet - Write a function that encodes a string into 1337.
* @str: points at the string in memory
* Return: a pointer to the string
*/
char *leet(char *str)
{
char subs[] = {'4', '3', '0', '7', '1'};
char letters[] = {'a', 'e', 'o', 't', 'l'};
for (int i = 0; str[i]; i++)
{
for (int j = 0; j < 5; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] - 'a' + 'A')
{
str[i] = subs[j];
break;
}
}
}
return (str);
}

/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
char s[] =
s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
char *p;
p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}
