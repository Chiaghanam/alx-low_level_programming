#include <stdio.h>
#include "main.h"
/**
 * main - print all argument it recieve
 * @argc: no. og arg
 * @argv: array of arg.
 *
 * Return: 0
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
