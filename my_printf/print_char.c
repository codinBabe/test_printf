#include "main.h"
/**
 * print_char - a function that print character
 * @c: character to print
 * Return: zero on success
 */
int print_char(va_list c)
{
	unsigned char a;

	a = va_arg(c, int);
	_putchar(a);

	return (0);
}
/**
 * print_percent - function that print percentage
 * Return: zero on success
 */
int print_percent(void)
{
	_putchar('%');
	return (0);
}
