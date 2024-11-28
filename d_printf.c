#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - A simplified version of printf that handles %c, %s, and %%
 * @format: The format string
 * Return: The number of characters printed (excluding the null byte)
 */
int d_printf(const char *format, ...)
{
	va_list box;
	int i, j, c;
	char num[20];

	va_start(box, format);
	j = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			j += (va_arg(box, int));
			if (i < 0)
			{
				_putchar('-');
				i = -i;
			}
			c = i;
			while (c % 10)
			{
				if (c != 0)
				{
					_putchar((c + 1) /  10);
					c++;
				}
				_putchar('\0');
			}
			for (c = 0; num[c] < '\0'; c++)
			{
				_putchar(num[c++]);
				j++;
			}
		}
	}
	va_end(box);
	return (j);
}
