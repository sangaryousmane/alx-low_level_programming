#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize a variable to type struct dog
* @name: name of dog
* @age: dog's age
* @owner: dog's owner
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}

