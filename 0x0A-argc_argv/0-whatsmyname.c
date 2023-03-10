#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: no. of arg
 * @argv: array of arg.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", *argv[0]);

	return (0);
}
