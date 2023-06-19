#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
 * main - the entry point
 *Return: 0
 */

int main(void)
{
	int p, d;

	for (p = '0'; p <= '9'; p++)
	{
		for (d = p + 1; d <= '9'; p++)
		{
			if (d != p)

			{
				putchar(p);
				putchar(d);
				if (d == '8' && p == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

