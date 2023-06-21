#include "main.h"

/**
* print_the_last_digit - print the last digit of a number
* @e:The number to be treated
* Return: value of the last digits
*/

int print_last_digit(int e)
{
int last;

last = e % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
