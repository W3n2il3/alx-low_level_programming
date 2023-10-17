#include "main.h"

/**
 * _isdigit - check if the charecter is digit
 * @x: the number to be checked
 * Return:1 a digit charecter or 0 anything else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
		return (1);
	return (0);
}
