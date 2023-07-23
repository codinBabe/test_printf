#include "main.h"
/**
 * print_pointer - function that print pointer address
 * @p:the pointer
 * Return: zero on success
 */
int print_pointer(va_list p)
{
	void *ptr = va_arg(p, void *);
	size_t address;
	int i, hex_digit;

	address = (size_t)ptr;
	_putchar('0');
	_putchar('x');
	for (i = (sizeof(size_t) * 2) - 1; i >= 0; i--)
	{
		hex_digit = (address >> (i * 4)) & 0xF;
		_putchar(hex_digit < 10 ? hex_digit + '0' :
				hex_digit - 10 + 'a');
	}

	return (18);
}
