#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %u byte(s)", sizeof(char));
printf("Size of an int: %u byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long int));
printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
printf("Size of a float: %f byte(s)", sizeof(float));

return (0);
}
