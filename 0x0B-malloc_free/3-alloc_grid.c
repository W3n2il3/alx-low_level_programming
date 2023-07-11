#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: is 0 or negative
 * @height: is 0 or negative
 * Return: NULL 
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 ||height <= 0)
		return (NULL);
	a = malloc((sizeof(char) * 1) + 1);

	if (a = NULL)
	{
		free(a);
		return(NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc((sizeof(int) * width);
				if (a[i] =
