#include "main.h"

/**
 * print_most_numbers - print the number from 0 to 9
 * discription: primt the number that includes 2 and 4
 * _putchar - to print charecter
 * Return: the number
 */

void print_most_numbers(void)
{
	int p = 0;

	for (; p <= 9; p++)
	{
		if ((p == 2) || (p == 4))
		{
			continue;
		}
		else
		{
			_putchar(p);
		}
	}
	_putchar('\n');
}
