#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*num_printer - print number with loop
*@num : integer to print
*Return: number of printed digits
**/

int num_printer(int num)
{
	int i, dig_count, rev, num_cpy, j;
	char sign;
	char *num_str;

	if (num == 0)
	{
		_putchar('0' + num);
		return (1);
	}
	sign = '+';
	i = rev = dig_count = 0;

	printf("%d\n", num);
	if (num < 0)
	{
		sign = '-';
		num = -num;
	}
	printf("%d\n", num);
	num_cpy = num;

	while (num / 10 || num % 10)
	{
		num /= 10;
		dig_count++;
	}
	num_str = malloc((sizeof(*num_str) * dig_count) + 1);
	if (num_str == NULL)
		return (0);
	
	for (j = 0; j < dig_count; j++)
	{
		num_str[j] = '0' + (num_cpy % 10);
		num_cpy = num_cpy / 10;
	}
	if (sign == '-')
	{
		_putchar(sign);
		i++;
	}

	for (j = dig_count; j >= 0; j--)
	{
		_putchar(num_str[j]);
		i++;
	}
	return (i);
}
