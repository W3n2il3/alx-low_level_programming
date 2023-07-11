#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: the size of the array
 * @c:the charecter fill if the array
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = molloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
	{
		s[i] = c;
	}
	return (s);
}
