#include "main.h"

/**
 * _strncat- operation of joining the two character
 * An inputted number of a byte from crc
 * @dest: a string to be opened upon
 * @src: a string to be oppened by dest
 * @n: a number of byte from src to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
