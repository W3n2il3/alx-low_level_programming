#include "main.h"

/**
 * *_memset - fill the block of memory with the specific value
 * @s: starting address of the memory to be filled
 * @b: the disired value
 * @n: number of byte to be changed
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
