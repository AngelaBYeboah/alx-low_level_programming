 #include <stdio.h>
#include "main.h"

/**
 * main - Print the nsme of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

return (0);
}
