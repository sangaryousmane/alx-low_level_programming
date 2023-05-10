#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void check(unsigned char *j);

void magic(unsigned char *j);
void class_(unsigned char *j);
void data_(unsigned char *j);
void show_version(unsigned char *j);
void print_abi(unsigned char *j);
void os_a_bi(unsigned char *j);
void print_type(unsigned int type_, unsigned char *j);
void show_entry(unsigned long int entry_, unsigned char *j);
void close_elf(int elf);
#endif 
