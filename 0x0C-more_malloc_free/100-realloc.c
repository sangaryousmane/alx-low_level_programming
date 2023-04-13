#include <stdio.h>
#include <stdlib.h>

/**
* _realloc -  reallocates a memory block
* @ptr: pointer
* @old_size: old size
* @new_size: new size
* Return: pointer to new
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *clone, *relloc;
unsigned int i;

switch (ptr != NULL)
{
case 1:
clone = ptr;
break;
case 0:
return ((malloc(new_size)));
}

switch (new_size == old_size)
{
case 1:
return (ptr);
}

switch (new_size == 0 && ptr != NULL)
{
case 1:
free(ptr);
return (NULL);
}
relloc = malloc(new_size);
if (relloc == NULL)
{
return (NULL);
}
for (i = 0; i < (old_size || i < new_size); i++)
{
*(relloc + i) = clone[i];
}
free(ptr);
return (relloc);
}
