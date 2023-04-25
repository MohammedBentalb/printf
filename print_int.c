#include "main.h"

/**
 * print_int - Function that prints a number in buffer
 * @buffer_counter: giving the index of the buffer
 * @buffer: buffer
 * @args: arguments
 * Return: Return buffer_counter
 *
 */

int print_int(int buffer_counter, char *buffer, va_list args)
{

	int zeros = 1;
	unsigned int cup;
	int number;

	number = va_arg(args, int);
	if (number < 0)
	{
		buffer[buffer_counter] = '-';
		buffer_counter++;
		number = number * -1;
	}
	if (number == 0)
	{
		buffer[buffer_counter] = '0';
		buffer_counter++;
		return (buffer_counter);
	}
	cup = number;

	while (cup > 9)
	{
		zeros = zeros * 10;
		cup = cup / 10;
	}

	cup = number;
	while (zeros)
	{
	buffer[buffer_counter] = '0' + (cup / zeros);
	cup = cup % zeros;
	zeros = zeros / 10;
	buffer_counter++;
	}
return (buffer_counter);
}
