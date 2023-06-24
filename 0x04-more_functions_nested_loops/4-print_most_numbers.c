#include "main.h"

/**
 * print_most_numbers - print the number from 0 to 9
 * discription: primt the number that includes 2 and 4
 * _putchar - to print charecter
 * Return: the number
 */

void print_most_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		if ((c == 2) || (c == 4))
		{
			continue;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
