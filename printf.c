#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - A simplified version of printf that handles %c, %s, and %%
 * @format: The format string
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list box;
	int i, j, k;
	char *s;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(box, format);
	j = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			j++;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			putchar(va_arg(box, int));
			j++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(box, char*);
			if (s == NULL)
			{
				s = "(null)";
			}
			for (k = 0; s[k] != '\0'; k++)
			{
				putchar(s[k]);
				j++;
			}
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			j++;
			i++;
		}
	}
	va_end(box);
	return (j);
}
