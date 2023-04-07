#include "main.h"

/**
 * is_prime_number - checks if a number is prime using recursion
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (prime_helper(n, 2));
}
}


/**
 * prime_helper - helper function for is_prime_number1
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
if (i == n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (prime_helper(n, i + 1));
}
}

