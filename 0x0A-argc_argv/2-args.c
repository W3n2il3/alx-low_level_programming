#include "main.h"
#include <stdio.h>

/**
 * main - print all the arguments
 * @argc: argument number
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
