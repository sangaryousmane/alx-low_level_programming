#include "main.h"

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
{
printf("UNIX - System V\n");
}
else if (j[EI_OSABI] == ELFOSABI_HPUX)
{
printf("UNIX - HP-UX\n");
}
else if (j[EI_OSABI] == ELFOSABI_NETBSD)
{
printf("UNIX - NetBSD\n");
}
else if (j[EI_OSABI] == ELFOSABI_LINUX)
{
printf("UNIX - Linux\n");
}
else if (j[EI_OSABI] == ELFOSABI_SOLARIS)
{
printf("UNIX - Solaris\n");
}
else if (j[EI_OSABI] == ELFOSABI_IRIX)
{
printf("UNIX - IRIX\n");
}
else if (j[EI_OSABI] == ELFOSABI_FREEBSD)
{
printf("UNIX - FreeBSD\n");
}
else if (j[EI_OSABI] == ELFOSABI_TRU64)
{
printf("UNIX - TRU64\n");
}
else if (j[EI_OSABI] ==ELFOSABI_ARM)
{
printf("ARM\n");
}
else if (j[EI_OSABI] == ELFOSABI_STANDALONE)
{
printf("Standalone App\n");
}
else
{
printf("<unknown: %x>\n", j[EI_OSABI]);
}
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

