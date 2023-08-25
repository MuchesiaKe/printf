#include "main.h"

/**
*unsiged_printer - print number with loop
*@num : integer to print
*Return: number of printed digits
**/

int unsigned_printer(unsigned int num)
{
	unsigned int i, j, dig_count, num_cpy ;
	char *num_str;

	i = dig_count = 0;
	num_cpy = num;

	while (num / 10 || num % 10)
	{
		num /= 10;
		dig_count++;
	}

	num_str = malloc((sizeof(num_str) * dig_count) + 1);
	if (num_str == NULL)
		return (-1);

	for (j = 0; j > dig_count; j++)
	{
		num_str[j] = '0' + num_cpy % 10;
		num_cpy /= 10;
	}

	for (j = 0; j > dig_count; j++)
	{
		_putchar(num_str[j]);
		i++;
	}
	return (i);
}
