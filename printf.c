#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list box;
	int i, j;
	char *car;

	va_start(box, format);
	j = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		j += va_arg(box, int);
		if (format[i] != '%')
		{
			putchar(format[i]);
			i++;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			car = va_arg(box, char);
			putchar(car[i]);
		}
	}
	va_end(box);
	return(j);
}

