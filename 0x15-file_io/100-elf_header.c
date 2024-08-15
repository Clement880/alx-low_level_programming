#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <errno.h>
#include <string.h>

#define ELF_MAGIC 0x464c457f
#define ELF_MAGIC_SIZE 4
#define ELF_HEADER_SIZE 64

typedef struct
{
	unsigned char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint32_t e_entry;
	uint32_t e_phoff;
	uint32_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf32_Ehdr;

void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

void print_elf_header(const Elf32_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	
	for (i = 0; i < 16; i++)
	{
        printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class:                             ");

	switch (header->e_ident[4])
	{
		case 1: printf("ELF32\n");
			break;
		case 2: printf("ELF64\n");
			break;
	default:
			printf("Unknown\n");
			break;
	}

	printf("Data:                              ");
	
	switch (header->e_ident[5])
		{
		case 1:
		printf("2's complement, little endian\n");
		break;
	case 2:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Unknown\n");
		break;
		}

	printf("Version:                           %d\n", header->e_ident[6]);

	printf("OS/ABI:                            ");
	switch
		(header->e_ident[7])
	{
		case 0:
		printf("UNIX - System V\n");
		break;
		
		default:
		printf("Unknown\n");
		break;
	}

	printf("ABI Version:                       %d\n", header->e_ident[8]);
	printf("Type:                              ");
	
	switch (header->e_type)
	{
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
		printf("Unknown\n");
		break;
	}

	printf("Entry point address:               0x%08x\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr header;
	const char *filename;

	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	return (98);
	}

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
	print_error("Error: Cannot open file");
	}

	if (read(fd, &header, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
	{
		close(fd);
		print_error("Error: Cannot read ELF header");
	}

	close(fd);

	if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		print_error("Error: Not an ELF file");
	}

	print_elf_header(&header);

	return (0);
}
