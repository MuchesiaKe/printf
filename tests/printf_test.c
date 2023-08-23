#include <stdio.h>
#include <limits.h>


/**
*main - test printf
*Return: 0 for success
**/

int main(void)
{
	printf("o: %o\n", 52);
	printf("x: %x\n", 52);
	printf("X: %X\n", 52);
	printf("u: %u\n", -52);
	printf("d: %d\n", 52);
	printf("i: %i\n", 052);
	printf("%d", -(INT_MIN + 1));
	return (0);
}
