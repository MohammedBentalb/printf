#include "main.h"

/**
 * print_char - Function to print a char
 * @buffer_counter: giving the index of the buffer
 * @buffer: buffer
 * @args: arguments
 * Return: Return buffer_counter
 */
int print_char(int buffer_counter, char *buffer, va_list args)
{
	char c;

	c = va_arg(args, int);
	buffer[buffer_counter] = c;
	buffer_counter++;

return (buffer_counter);
}
