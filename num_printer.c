#include "main.h"

/**
*num_printer - print number with loop
*@num : integer to print
*Return: number of printed digits
**/

int num_printer(int num)
{
	int i, dig_count;
	int long rev;
	char sign;

	if (num == 0)
	{
		_putchar('0' + num);
		return (1);
	}
	sign = '+';
	i = rev = dig_count = 0;
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
		_putchar('0' + (rev % 10));
		rev /= 10;
		i++;
	}
	return (i);
}
