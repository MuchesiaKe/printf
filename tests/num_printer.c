#include "printf.h"

/**
*num_printer - print number with loop
*@num : integer to print
*Return: number of printed digits
**/

int num_printer(int num)
{
	int i, rev, dig_count;
	char sign;

	if (num == 0)
	{
		_putchar('0' + num);
		_putchar('\n');
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
	_putchar('\n');
	return (i);
}


/**
*main - control program execution
*Return: 0 for success, non-zero for otherwise
**/

int main(void)
{
	_putchar('0' + num_printer(1000));
	_putchar('\n');
	_putchar('0' + num_printer(0001));
	_putchar('\n');
	_putchar('0' + num_printer(-1000));
	_putchar('\n');
	_putchar('0' + num_printer(1001));
	_putchar('\n');
	_putchar('0' + num_printer(23452));
	_putchar('\n');
	_putchar('0' + num_printer(-23453));
	_putchar('\n');
	_putchar('0' + num_printer(0));
	_putchar('\n');
	return (0);
}
