#include "main.h"

/**
 * print_perc - Function to print a persent character in buffer
 * @buffer_counter: giving the index of the buffer
 * @buffer: buffer
 * @args: arguments
 * Return: Return buffer_counter
 */
int print_perc(int buffer_counter, char *buffer, va_list args)
{
	(void) args;

	buffer[buffer_counter] = '%';
	buffer_counter++;

	return (buffer_counter);
}
