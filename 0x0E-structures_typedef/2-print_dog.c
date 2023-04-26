#include "dog.h"
#include <stdlib.h>

/**
* print_dog - prints content of the dog
* @d: dog to print
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
if (d->age <= 0)
{
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("Owner: (nil");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
}
