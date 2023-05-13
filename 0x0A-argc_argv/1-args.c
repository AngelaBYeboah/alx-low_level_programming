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
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
