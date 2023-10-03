#include <elf.h>
#include "main.h"

void p_osabi_more(Elf64_Ehdr hd);
/**
 * p_magic - prints ELF magic bytes
 *
 * @hd: ELF header struct
 */
void p_magic(Elf64_Ehdr hd)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%2.2x%s", hd.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
	}
}
/**
 * p_class - prints ELF class
 *
 * @hd: ELF header struct
 */
void p_class(Elf64_Ehdr hd)
{
	printf("  Class:                             ");
	switch (hd.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * p_data - prints ELF data
 *
 * @hd: ELF header struct
 */
void p_data(Elf64_Ehdr hd)
{
	printf("  Data:                              ");
	switch (hd.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * p_version - prints ELF version
 *
 * @hd: ELF header struct
 */
void p_version(Elf64_Ehdr hd)
{
	printf("  Version:                           %d", hd.e_ident[EI_VERSION]);
	switch (hd.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
		default:
			break;
	}
	printf("\n");
}
/**
 * p_osabi - prints ELF OS/ABI
 *
 * @hd: ELF header struct
 */
void p_osabi(Elf64_Ehdr hd)
{
	printf("  OS/ABI:                            ");
	switch (hd.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			p_osabi_more(hd);
			break;
	}
	printf("\n");
}
/**
 * p_osabi_more - prints ELF
 *
 * @hd: ELF header struct
 */
void p_osabi_more(Elf64_Ehdr hd)
{
	switch (hd.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("Unix - openBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", hd.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * p_abiversion - prints ELF ABI version
 *
 * @hd: ELF header struct
 */
void p_abiversion(Elf64_Ehdr hd)
{
	printf("  ABI Version:                       %d\n", hd.e_ident[EI_ABIVERSION]);
}
/**
 * p_type - prints ELF type
 *
 * @hd: ELF header struct
 */
void p_type(Elf64_Ehdr hd)
{
	char *ptr = (char *)&hd.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (hd.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (ptr[i])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", ptr[i]);
			break;
	}
	printf("\n");
}
/**
 * p_entry - prints ELF entry point address.
 *
 * @hd: ELF header struct
 */
void p_entry(Elf64_Ehdr hd)
{
	int i = 0, l = 0;
	unsigned char *ptr = (unsigned char *)&hd.e_entry;

	printf("  Entry point address:               0x");
	if (hd.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = hd.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i--;
		printf("%x", ptr[i--]);
		for (; i >= 0; i--)
			printf("%02x", ptr[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		l = hd.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i++;
		printf("%x", ptr[i++]);
		for (; i <= l; i++)
			printf("%02x", ptr[i]);
		printf("\n");
	}
}
/**
 * main - check the code
 *
 * @ac: argc
 * @av: argv
 *
 * Return: 1 on success, 0 on failure.
 */
int main(int ac, char **av)
{
	int ff;
	ssize_t n;
	Elf64_Ehdr hd;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	}
	ff = open(av[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]), exit(98);
	}
	n = read(ff, &hd, sizeof(hd));
	if (n < 1 || n != sizeof(hd))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	if (hd.e_ident[0] == 0x7f && hd.e_ident[1] == 'E' && hd.e_ident[2] == 'L' &&
			hd.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", av[1]), exit(98);
	}
	p_magic(hd);
	p_class(hd);
	p_data(hd);
	p_version(hd);
	p_osabi(hd);
	p_abiversion(hd);
	p_type(hd);
	p_entry(hd);
	if (close(ff))
	{
		dprintf(STDERR_FILENO, "Error: Can't Close file descriptor %d\n", ff);
		exit(98);
	}
	return (0);

}
