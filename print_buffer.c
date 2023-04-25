#include "main.h"

/**
 * print_buffer - Function that prints buffer
 * @buffer: buffer
 * @buffer_counter: number
 * Return: Return bytes printed
 */
int print_buffer(char *buffer, unsigned int buffer_counter)
{
	return (write(1, buffer, buffer_counter));
}
