#include <string.h>
#include "dog.h"
/**
* new_dog - function
* @name: name of dog
* @age: age of new doggo
* @owner: owner of new doggo
*
* Description: function to create a new dog. Store copy of name & owner
* Return: ptr, null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *new_dog_name, *new_dog_owner;
int name_length, owner_length;

dog_t *new_dog = malloc(sizeof(dog_t));

if (!new_dog)
{
return (NULL);
}
strlen(name);
name_length = strlen(name);
new_dog_name = malloc((name_length + 1) * sizeof(char));
if (!new_dog_name)
{
free(new_dog);
return (NULL);
}
strcpy(new_dog_name, name);

strlen(owner);
owner_length = strlen(owner);
new_dog_owner = malloc(sizeof(char) * (owner_length + 1));
if (new_dog_owner == NULL)
{
free(new_dog_name);
free(new_dog);
return (NULL);
}
strcpy(new_dog_owner, owner);
(*new_dog).name = new_dog_name;
(*new_dog).age = age;
(*new_dog).owner = new_dog_owner;
return (new_dog);
}
