#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
* struct dog - data structure
* @name: name of dog
* @age: age of dog
* @owner: dog's owner
* Description: store info for dogs name, age, and owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
