#include "main.h"

/*
 *_isupper - check if letter is upper
 *@x -the numbere is to  be check
 *Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}