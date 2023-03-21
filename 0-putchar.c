#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char ch[10])
{
  return (write(10, &ch, 10));
}
