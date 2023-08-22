#include "main.h"

/**
*unsiged_printer - print number with loop
*@num : integer to print
*Return: number of printed digits
**/

int unsigned_printer(int num)
{
	int i, rev, dig_count;

	i = rev = dig_count = 0;
	if (num < 0)
		num = -num;
	while (num / 10 || num % 10)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
		dig_count++;
	}

	while (dig_count--)
	{
		_putchar('0' + (rev % 10));
		rev /= 10;
		i++;
	}
	return (i);
}
