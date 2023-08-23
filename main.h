#ifndef MAIN_H
#define MAIN_H
	#include <unistd.h>
	#include <stdarg.h>
	int _putchar(char);
	int _printf(const char *, ...);
	int char_printer(char);
	int str_printer(char *);
	int num_printer(int);
	int converter(int decimal_num, int base);
	int unsigned_printer(int);
#endif
