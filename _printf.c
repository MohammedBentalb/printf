#include "main.h"
/**
 * _printf - Function that works the same as printf() function
 * @format: format
 * Return: Return buffer_counter
 */
int _printf(const char *format, ...)
{
	char buffer[2024];
	va_list args;
	int i = 0, j = 0, buffer_counter = 0;
	re_t functions[] = {
		{'%', print_perc}, {'c', print_char}, {'s', print_str},
		{'d', print_int}, {'i', print_int}, {'r', print_rev}, {'\0', NULL}};
	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{ i++;
			if (format[i] == '\0')
			{	buffer[buffer_counter] = '%', buffer_counter++;
				break; }
			for (j = 0; functions[j].c != '\0'; j++)
			{
				if (format[i] == functions[j].c)
				{
					buffer_counter = functions[j].f(buffer_counter, buffer, args);
					break;
				}
			}
			if (functions[j].c == '\0')
			{
				buffer[buffer_counter] = '%', buffer_counter++;
				buffer[buffer_counter] = format[i], buffer_counter++;
			}
		}
		else
			buffer[buffer_counter] = format[i], buffer_counter++;
		i++;
	}
	va_end(args), buffer[buffer_counter] = '\0';
	print_buffer(buffer, buffer_counter);
	return (buffer_counter);
}
