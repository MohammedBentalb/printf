#include "main.h"

/**
 * print_bn - Function that converts a number to binary
 * @buffer_counter: giving the index of the buffer
 * @buffer: buffer
 * @args: arguments
 * Return: Return buffer_counter
 */

int print_bn(int buffer_counter, char *buffer, va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	unsigned int cup = number;
	int binary = 1;

	while (cup > 1)
	{
		binary = binary * 2;
		cup = cup / 2;
	}
	cup = number;
	while (binary > 0)
	{
		buffer[buffer_counter] = ('0' + (cup / binary));
		cup = cup % binary;
		binary = binary / 2;
		buffer_counter++;
	}

	return (buffer_counter);
}
