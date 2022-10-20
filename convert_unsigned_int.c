#include "main.h"

/**
 * print_u - prints an unsigned int in decimal notation
 * @u: unsigned int to be printed in decimal notation
 *
 * Return: number of unsigned int printed
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, j, n, sum;
	int counter;

	n = va_arg(u, unsigned int);
	j = 1000000000; /* (10 ^ 9) */
	a[0] = n / j;
	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (n / j) % 10;
	}
	for (i = 0, sum = 0, counter = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_o - takes an unsigned int and prints it in octal notation
 * @o: unsigned int to be printed in octal notation
 *
 * Return: number of unsigned int printed
 */
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int i, j, n, sum;
	int counter;

	n = va_arg(o, unsigned int);
	j = 1073741824; /* (8 ^ 10) */
	a[0] = n / j;
	for (i = 1; i < 11; i++)
	{
		j /= 8;
		a[i] = (n / j) % 8;
	}
	for (i = 0, sum = 0, counter = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation
 * @b: unsigned int to be printed in binary notation
 *
 * Return: number of unsigned int printed
 */
int print_b(va_list b)
{
	unsigned int n, j, i, sum;
	unsigned int a[32];
	int counter;

	n = va_arg(b, unsigned int);
	j = 2147483648; /* (2 ^ 31) */
	a[0] = n / j;
	for (i = 1; i < 32; i++)
	{
		j /= 2;
		a[i] = (n / j) % 2;
	}
	for (i = 0, sum = 0, counter = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			counter++;
		}
	}
	return (counter);
}
