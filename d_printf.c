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
        int i, j, c, count, afficheur;
        char num[10];

        va_start(box, format);
        j = 0;
        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
                {
                        c = va_arg(box, int);
                        if (c < 0)
                        {
                                putchar('-');
                                c = -c;
                        }
                        else if (c == 0)
                        {
                                putchar('0');
                        }
                        else
                        {
                                count = 9;
                                while (c > 0)
                                {
                                        num[count--] = (char) ('0' + (c % 10));
                                        c /= 10;
                                }
                                for (afficheur = count + 1; afficheur <= 9; afficheur++)
                                {
                                        putchar(num[afficheur]);
                                        j++;
                                }
                        }
                }
        }
        va_end(box);
        return (j);
}
