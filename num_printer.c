#include "main.h"
#include <stdlib.h>

/**
*num_printer - print number with loop
*@num : integer to print
*Return: number of printed digits
**/

int num_printer(int num)
{
	int i, dig_count, rev;
	char sign;

	if (num == 0)
	{
		_putchar('0' + num);
		return (1);
	}
	sign = '+';
	i = dig_count = rev = 0;

	if (num < 0)
	{
		sign = '-';
		num = -num;
	}

	while (num / 10 || num % 10)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
		dig_count++;
	}
	if (sign == '-')
	{
		_putchar(sign);
		i++;
	}

	while (dig_count--)
	{
		_putchar('0' + rev % 10);
		i++;
		rev /= 10;
	}
	return (i);
}
