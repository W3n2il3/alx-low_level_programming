#include <unistd.h>

/**
 * main - the program that print putchar
 * Return: 0
 *
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
