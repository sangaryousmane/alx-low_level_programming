#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
* print_entry_point_address -  prints address of buffer
* @buffer: file buffer
* Return: nothing
*/
void print_entry_point_address(char *buffer)
{
int i = 0;
int begin;
char system_type;

printf(" Entry point address: 0x");
system_type = buffer[1] + '0';
if (system_type == '1')
{
begin = 26;
printf("80");
while (i <= (begin - 22))
{
if (buffer[begin - i] > 0)
{
printf("%x", buffer[begin - i]);
}
else if (buffer[begin - i] < 0)
{
printf("%x", 256 + buffer[begin - i]);
}
i++;
}
if (buffer == 6)
{
printf("00");
}
}
if (system_type == '2')
{
begin = 26;
while (i < (begin - 23))
{
if (buffer[begin - i] >= 0)
printf("%02x", buffer[begin - i]);
else if (buffer[begin - i] < 0)
printf("%02x", 256 + buffer[begin - i]);
i++;
}
}
printf("\n");
}

/**
* print_file_type - prints the type of the file
* @file_data: the file data
* Return: nothing.
*/
void print_file_type(char *file_data)
{
char file_type = file_data;
if (file_data[1] == 1)
{
file_type = file_data;
}
else
{
file_type = file_data;
}
printf(" File Type: ");
switch (file_type)
{
case 0:
printf("NONE (No file type)\n");
break;
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
case 4:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", file_type);
break;
}
}
