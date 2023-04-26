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
if (d->owner == NULL || d->age <= .0)
{
printf("(nil)\n");
printf("(nil)\n");
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %lf\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
