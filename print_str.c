#include "main.h"

/**
 * print_str - Function to print a string in buffer
 * @buffer_counter: giving the index of the buffer
 * @buffer: buffer
 * @args: arguments
 * Return: Return buffer_counter
 */
int print_str(int buffer_counter, char *buffer, va_list args)
{
	int i;
	char *j;

	j = va_arg(args, char *);

	if (j == NULL)
		j = "(null)";

	i = 0;
	while (j[i] != '\0')
	{
		buffer[buffer_counter] = j[i];
		i++;
		buffer_counter++;
	}

	return (buffer_counter);
}
