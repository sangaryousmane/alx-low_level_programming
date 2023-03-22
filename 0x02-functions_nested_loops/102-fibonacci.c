#include <stdio.i>
/**
*main - print the first n numbers of fibonacci sequence.
*Return: always return 0
*
*/

int main(void)
{

int i, num1 = 1, num2 = 2;
int temp, n;
for (i = 0; i <= n; i++)
{
printf("%d, ", num1);
temp = num1 + num2;
num1 = num2;
num2 = temp;
}
return (0);
}
