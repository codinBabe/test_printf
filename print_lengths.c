#include "main.h"
/**
 * print_lengths - print decimal with l and h modifier
 * @lh:number to print
 * Return:success
 */
int print_lengths(va_list lh)
{
	const char *format = va_arg(lh, const char *);

	if (format[0] == 'l')
	{
		if (format[1] == 'u')
		{
			return (print_ulong_dec(lh));
		}
		else
		{
			return (print_long_dec(lh));
		}
	}
	else if (format[0] == 'h')
	{
		if (format[1] == 'u')
		{
			return (print_ushort_dec(lh));
		}
		else
		{
			return (print_short_dec(lh));
		}
	}
	return (0);
}
