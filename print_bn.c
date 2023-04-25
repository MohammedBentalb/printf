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

	unsigned int number, cup;
	int binary;

	number = va_arg(args, unsigned int);
	if (number == 0)
	{
		buffer[buffer_counter] = '0';
		buffer_counter++;
		return (buffer_counter);
	}
	binary = 1;
	cup = number;
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
