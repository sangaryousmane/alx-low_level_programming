#ifndef __MAIN_
#define __MAIN_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char ch);
void print_binary(unsigned long int n);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);
#endif /* __MAIN_ */
