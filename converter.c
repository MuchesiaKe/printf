#include <stdlib.h>
#include "main.h"

/**
*converter - convert from decimal to specified base
*@decimal_num: number to convert from decimal
*@base: base to convert to
*Return: decimal_num to equivalent base specified
**/

int converter(int decimal_num, int base)
{
	int i, quotient, num_conv;
	int *rem;

	num_conv = 0;
	i = 1;
	quotient = decimal_num;
	while (quotient /= base)
		i++;
	rem = malloc(sizeof(*rem) * i);
	if (rem == NULL)
	{
		return (-1);
	}
	quotient = decimal_num;
	for (i = 0; quotient != 0; i++)
	{
		rem[i] = quotient % base;
		quotient = quotient / base;
	}
	while(i >= 0)
	{
		num_conv = (num_conv * 10) + rem[i];
		i--;
	}
	free(rem);
	return (num_conv);
}
