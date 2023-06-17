# include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point 
 * Return: 0
 */

int main(void)
{
        char letters;

        for (letters = 'z' ; letters >= 'a' ; letters--)
        {
                putchar(letters);
        }
        putchar('\n');
        return (0);
}
