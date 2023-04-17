#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
* struct dog - structure datatype
* @name: name of dog
* @age: age of dog
* @owner: dog's owner
* Description: store info for dogs
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
void print_dog(struct dog *d);
#endif
