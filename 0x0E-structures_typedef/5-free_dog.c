#include "dog.h"
#include <stdlib.h>

/**
* free_dog - function to free dogs
* @d: structure type define
* Description: frees dogs
* Return: nothing
*/
void free_dog(dog_t *d)
{
if (!d)
{
exit(98);
}
free(d);
}
