#include "dog.h"
#include <stdlib.h>

/**
* print_dog - prints content of the dog
* @d: dog to print
* Return: nothing
*/
void print_dog(struct dog *d)
{

if (d == NULL)
{
printf("(nil)");
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
printf("Name: %s\n", d->name);
printf("Age: %lf\n", d->age);
printf("Owner: %s\n", d->owner);
}
