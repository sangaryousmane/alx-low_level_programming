#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <elf.h>


ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_elf(unsigned char *e_ident);
void _magic(unsigned char *e_ident);
void process_class(unsigned char *e_ident);
void _data(unsigned char *e_ident);
void _version(unsigned char *e_ident);
void _os(unsigned char *e_ident);
void _abi(unsigned char *e_ident);
void _type(unsigned int e_type, unsigned char *e_ident);
void _entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif /* MAIN_H */
