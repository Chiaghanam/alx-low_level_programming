#include "main.h"
/**
 * _puts_recursion - print a string, followed by a new line
 * @s: string
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}