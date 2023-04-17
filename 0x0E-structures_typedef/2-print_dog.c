#include "dog.h"
#include <stdlib.h>

/**
* print_dog - prints content of the dog
* @d: dog to print
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (!d)
{
return;
}

if ((*d).name == NULL)
{
(*d).name = "(nil)";
}
if ((*d).owner == NULL)
{
(*d).owner = "(nil)";
}
else
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
}
