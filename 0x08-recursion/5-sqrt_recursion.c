#include "main.h"

int helper_sqrt(int n, int i);
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number to find square root of.
* Return: the square if found, -1 otherwise
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (helper_sqrt(n, 1));
}
}

/**
 * helper_sqrt - helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper_sqrt(int n, int i)
{
if (i * i == n)
{
return (i);
}
else if (i * i > n)
{
return (-1);
}
else
{
return (helper_sqrt(n, i + 1));
}
}
