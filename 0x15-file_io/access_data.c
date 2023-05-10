#include "main.h"

/**
 * check - Checks if a file is an ELF file.
 * @j: pointer to ELF class.
 *
 * Description: exit code 98 if file isn't an elf file.
 */
void check(unsigned char *j)
{
int i;
for (i = 0; i < 4; i++)
{
if (j[i] != 127 && j[i] != 'E' && j[i] != 'L' &&
j[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * magic - Prints the magic numbers of an ELF header.
 * @j: pointer to ELF class.
 *
 * Description: separated by spaces.
 */
void magic(unsigned char *j)
{
int index;
printf("  Magic:   ");
for (index = 0; index < EI_NIDENT; index++)
{
printf("%02x", j[index]);
if (index == EI_NIDENT - 1)
{
printf("\n");
}
else
{
printf(" ");
}
}
}

/**
 * class_ - prints the class of elf.
 * @j: pointer to ELF class.
 */
void class_(unsigned char *j)
{
printf("  Class:                             ");
switch (j[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", j[EI_CLASS]);
}
}

/**
 * data_ - Prints the data of elf.
 * @j: pointer to ELF class.
 */
void data_(unsigned char *j)
{
printf("  Data:                              ");
if (j[EI_DATA] == ELFDATANONE)
{
printf("none\n");
}
else if (j[EI_DATA] == ELFDATA2LSB)
{
printf("2's complement, little endian\n");
}
else if (j[EI_DATA] == ELFDATA2MSB)
{
printf("2's complement, big endian\n");
}
else
{
printf("<unknown: %x>\n", j[EI_CLASS]);
}
}

