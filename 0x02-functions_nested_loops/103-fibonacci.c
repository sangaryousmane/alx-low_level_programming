#include <stdio.h>

/**
* main - prints the sum of the even-valued terms, followed by a new line.
* Return: always return 0
*
*/

int main(void)
{
int n = 4000000, sum = 0;
int prev_term = 1, current_term = 2, next_term = 0;

while (current_term <= n)
{

}
if (current_term % 2 == 0)
{
sum += current_term;
}
next_term = prev_term + current_term;
prev_term = current_term;
current_term = next_term;

printf("%d", sum);
return (0);
}

