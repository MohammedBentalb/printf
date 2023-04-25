#include "main.h"
/**
 * print_rev - substitute %r by argument number in reverse
 * @buffer: string
 * @args: arguments
 * @buffer_counter: number (buffer index)
 * Return: Return buffer_counter
 */
int print_rev(int buffer_counter, char *buffer, va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);
	if (str)
	{
		while (str[i] != '\0')
			i++;
		i = i - 1;
		while (i >= 0)
		{
			buffer[buffer_counter] = str[i];
			buffer_counter++;
			i--;
		}
	}
	return (buffer_counter);
}
