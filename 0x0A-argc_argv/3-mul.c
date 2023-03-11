#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiples two no.
 * @argc: no of arg
 * @argv: array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
