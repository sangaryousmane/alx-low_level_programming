#include "3-calc.h"

/**
* op_add - adds two numbers
* @a: first operand
* @b: second operand
* Return: sum of @a and @b
*/
int op_add(int a, int b)
{
int result = a + b;
return (result);
}


/**
* op_sub - subtracts two numbers
* @a: first operand
* @b: second operand
* Return: difference between @a and @b
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - find the products of @a and @b
* @a: first multiplicand
* @b: second multiplicand
* Return: the product of @a and @b
*/
int op_mul(int a, int b)
{
return (b * a);
}


/**
* op_div - finds the quotient of @a and @b
* @a: dividend
* @b: divisor
* Return: the quotient of @a and @b
*/
int op_div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
printf("Error\n");
exit(100);
}
}


/**
* op_mod - the remainder of @a and @b
* @a: first operand
* @b: second operand
* Return: the remainder of @a and @b
*/
int op_mod(int a, int b)
{
if (b)
{
return (a % b);
}
printf("Error\n");
exit(100);
}
