#include "main.h"
#include <stddef.h>


/**
 * print_string - Prints a string
 * @s: The string to print
 *
 * Return: Number of characters printed
 */
int print_string(char *s)
{
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}
