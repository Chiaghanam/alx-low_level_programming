#include <stdio.h>
/*main - void*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code her
	 * - you are not allowed to use a
	 *   - you are not allowed to modify p
	 *   you are not allowed to code any thing else than this line of code
	 *   Return: 0
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
