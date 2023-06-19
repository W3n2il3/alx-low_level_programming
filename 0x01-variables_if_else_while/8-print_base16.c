#include <stdio.h>

/**
 * main - the program display the numbers starting from 0-16
 * Return: 0
 */

int main(void)
{
	int w;
	char low;

for (w = '0'; w <= '9'; w++)
putchar(w);

for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');
return (0);
}
