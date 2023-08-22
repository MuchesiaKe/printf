#include "main.h"

/**
*str_printer - prints string argument
*@str_print: string to print
*Return: number of bytes printed
**/

int str_printer(char *str_print)
{
	int i;

	for (i = 0; *str_print; i++)
	{
		_putchar(*str_print);
		str_print++;
	}
	return (i);
}
