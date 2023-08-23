#include "main.h"

/**
 * sub - substract a from b
 * @a: first arg
 * @b: second arg
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * add - sum a and b
 * @a: the first arg
 * @b: second arg
 * Return: the sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - multiplies a and b
 * @a: the first arg
 * @b: the second arg
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - finds the modulus of a and b
 * @a: first arg
 * @b: second arg
 * Return: the modulus of a and b
 */
int mod(int a, int b)
{
	return (a % b);
}

/**
 * div - finds the quotient of a and b
 * @a: first arg
 * @b: second arg
 * Return: the quotient of a and b
 */
ssize_t div(ssize_t a, ssize_t b)
{
	return (a / b);
}
