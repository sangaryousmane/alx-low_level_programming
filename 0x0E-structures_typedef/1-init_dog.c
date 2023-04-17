#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* init_dog - initialize a variable to type struct dog
* @d: dog to initialize
* @name: name of dog
* @age: dog's age
* @owner: dog's owner
* Description: initialize a variable to structure dog
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
}
