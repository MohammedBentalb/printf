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
	int num = va_arg(args, int);
	unsigned int number, cup;
	int binary = 1;

	if (num < 0)
	{
		print_buffer((char *)'1', 1);
		number = (unsigned int)(-1 * num);
	}
	else
		number = num;


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
