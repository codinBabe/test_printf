#include "main.h"
/**
 * print_string - a funtion that print string
 * @s: string to print
 * Return: zero on success
 */
int print_string(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
