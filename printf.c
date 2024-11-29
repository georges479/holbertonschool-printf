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
	int index, acc, k;
	char *s;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(box, format);
	acc = 0;
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			putchar(format[index]);
			acc++;
		}
		if (format[index] == '%' && format[index + 1] == 'c')
		{
			putchar(va_arg(box, int));
			acc++;
			index++;
		}
		else if (format[index] == '%' && format[index + 1] == 's')
		{
			s = va_arg(box, char*);
			if (s == NULL)
			{
				s = "(null)";
			}
			for (k = 0; s[k] != '\0'; k++)
			{
				putchar(s[k]);
				acc++;
			}
			index++;
		}
		else if (format[index] == '%' && format[index + 1] == '%')
		{
			putchar('%');
			acc++;
			index++;
		}
	}
	va_end(box);
	return (acc);
}
