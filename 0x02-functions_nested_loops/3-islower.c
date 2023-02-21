#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is char t be checked
 * Return: 1 if char is lowercase, otherise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
