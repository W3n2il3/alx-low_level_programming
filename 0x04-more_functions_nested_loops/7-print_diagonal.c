#include "main.h"

/**
 * print_diagonal- draw diagonal line according to parameter
 * @n: the number of times to print diagonal line
 * Return: empty
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(02);
			}
			_putchar(02);
		}
		_putchar('\n');
	}
}

