# STRUCTURES AND TYPEDEF IN C
Implementing OOPs in C andcreating user define data type

# TASKS
1. Define a new type struct dog with the following elements:
<a href="https://github.com/sangaryousmane/alx-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c">dog.h</a>
name, type = char *
age, type = float
owner, type = char *

2. Write a function that initialize a variable of type struct dog
<a href="">Initialize dog</a>
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

3. Write a function that prints a struct dog
<a href="https://github.com/sangaryousmane/alx-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c">print struct dog</a>
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

4. Define a new type dog_t as a new name for the type struct dog.
<a href="https://github.com/sangaryousmane/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h">Create a new type dog</a>

5. Write a function that creates a new dog.
<a href="https://github.com/sangaryousmane/alx-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c">Create new dog</a>
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

6. Write a function that frees dogs.
<a href="https://github.com/sangaryousmane/alx-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c">free dog</a>
Prototype: void free_dog(dog_t *d);
