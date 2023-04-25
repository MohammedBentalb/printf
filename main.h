#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct re - struct re
 * @c: type
 * @f: functionc pointer
 *
 */
typedef struct re
{
	char c;
	int (*f)(int, char *, va_list);
} re_t;

int print_buffer(char *buffer, unsigned int buffer_counter);
int _printf(const char *format, ...);
int print_str(int buffer_counter, char *buffer, va_list args);
int print_char(int buffer_counter, char *buffer, va_list args);
int print_int(int buffer_counter, char *buffer, va_list args);
int print_perc(int buffer_counter, char *buffer, va_list args);
int print_rev(int buffer_counter, char *buffer, va_list args);

#endif
