#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/**
* main -print opcode of itself
* @argc: argument count
* @argv: argument array
*
* Return: 1 if no argument supplied 2 if bytes to print
* are negative 0 on success
*/

int main(int argc, char *argv[])
{
	int i;
	void *pt_to_main;
	unsigned char *opcode_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	pt_to_main = &main;
	opcode_ptr = (unsigned char *)pt_to_main;

	for (i = 0; i < bytes; i++)
	{
    	printf("%02" PRIx8, opcode_ptr[bytes - 1 - i]);
	}
	printf("\n");
}
