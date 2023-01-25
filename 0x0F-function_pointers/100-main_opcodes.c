#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsiged char *)address;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
