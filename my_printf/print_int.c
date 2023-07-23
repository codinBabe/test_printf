#include "main.h"
/**
 * print_int - a function that print %i
 * @i: integer to print
 * Return: zero on success
 */
int print_int(va_list i)
{
	int num, temp, divisor, digit;

	num = va_arg(i, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	divisor = 1;
	temp = num;
	while (temp < 9)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
	return (0);
}
