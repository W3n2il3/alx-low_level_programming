#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/**
	 * write the line of a code
	 * remember
	 * you are allowed to used a
	 * you are allowed to modify using p
	 * only one statement
	 * you are allowed to code anything
	 */
	*(p + 5) = 98;
	/* .....this is print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
