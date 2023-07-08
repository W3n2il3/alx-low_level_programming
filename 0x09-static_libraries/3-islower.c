#include "main.h"

/**
 *_islower- check for lower case charecter
 * @c :the charector to be checked
 * Return:0 (otherwise),1 (lowercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

