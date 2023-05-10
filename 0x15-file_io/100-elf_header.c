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

/**
 * show_version - Prints the version of elf
 * @j: pointer to ELF class.
 */
void show_version(unsigned char *j)
{
printf("  Version:                           %d", j[EI_VERSION]);

if (j[EI_VERSION] == EV_CURRENT)
{
printf(" (current)\n");
}
else
{
printf("\n");
}
}

/**
 * os_a_bi - Prints the OS/ABI of an ELF header.
 * @j: pointer to ELF class.
 */
void os_a_bi(unsigned char *j)
{
printf("  OS/ABI:                            ");
if (j[EI_OSABI] == ELFOSABI_NONE)
printf("UNIX - System V\n");
else if (j[EI_OSABI] == ELFOSABI_HPUX)
printf("UNIX - HP-UX\n");
else if (j[EI_OSABI] == ELFOSABI_NETBSD)
printf("UNIX - NetBSD\n");
else if (j[EI_OSABI] == ELFOSABI_LINUX)
printf("UNIX - Linux\n");
else if (j[EI_OSABI] == ELFOSABI_SOLARIS)
printf("UNIX - Solaris\n");
else if (j[EI_OSABI] == ELFOSABI_IRIX)
printf("UNIX - IRIX\n");
else if (j[EI_OSABI] == ELFOSABI_FREEBSD)
printf("UNIX - FreeBSD\n");
else if (j[EI_OSABI] == ELFOSABI_TRU64)
printf("UNIX - TRU64\n");
else if (j[EI_OSABI] == ELFOSABI_ARM)
printf("ARM\n");
else if (j[EI_OSABI] == ELFOSABI_STANDALONE)
printf("Standalone App\n");
else
printf("<unknown: %x>\n", j[EI_OSABI]);
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @j: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *j)
{
printf("  ABI Version:                       %d\n", j[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @type_: file type.
 * @j: pointer to ELF class.
 */
void print_type(unsigned int type_, unsigned char *j)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
type_ >>= 8;
}
printf("  Type:                              ");
switch (type_)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", type_);
}
}

/**
 * show_entry - Prints the entry point of an ELF header.
 * @entry_: The address of the ELF entry point.
 * @j: A pointer to an array containing the ELF class.
 */
void show_entry(unsigned long int entry_, unsigned char *j)
{
printf("  Entry point address:               ");

if (j[EI_DATA] == ELFDATA2MSB)
{
entry_ = ((entry_ << 8) & 0xFF00FF00) | ((entry_ >> 8) & 0xFF00FF);
entry_ = (entry_ << 16) | (entry_ >> 16);
}
if (j[EI_CLASS] == ELFCLASS32)
{
printf("%#x\n", (unsigned int) entry_);
}
else
{
printf("%#lx\n", entry_);
}
}


/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
exit(98);
}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments
 * @argv: the arguments.
 *
 * Return: 0 on success always.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int o, r;
o = open(argv[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(o);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
r = read(o, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
free(header);
close_elf(o);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}
check(header->e_ident);
printf("ELF Header:\n");
magic(header->e_ident);
class_(header->e_ident);
data_(header->e_ident);
show_version(header->e_ident);
os_a_bi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
show_entry(header->e_entry, header->e_ident);
free(header);
close_elf(o);
return (0);
}

