#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define FIELD_BUF_SIZE 50

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE	1
#define CONVERT_UNSIGNED	2

typedef struct parameters
{
	unsigned int unsignn		: 1;

	unsigned int p_flag		: 1;
	unsigned int s_flag		: 1;
	unsigned int h_flag	: 1;
	unsigned int z_flag		: 1;
	unsigned int m_flag		: 1;

	unsigned int width;
	unsigned int precision;

	unsigned int a_modifier		: 1;
	unsigned int b_modifier		: 1;

} 	paramst;

typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, paramst *);
} specifiert;
int _puts(char *str);
int _putchar(int c);
int print_char(va_list ap, paramst *params);
int print_int(va_list ap, paramst *params);
int print_string(va_list ap, paramst *params);
int print_percent(va_list ap, paramst *params);
int print_Sum(va_list ap, paramst *params);
char *convert(long int num, int base, int flags, paramst *params);
int print_unsigned(va_list ap, paramst *params);
int print_address(va_list ap, paramst *params);
int (*get_specifier(char *s))(va_list ap, paramst *params);
int get_print_funcion(char *s, va_list ap, paramst *params);
int get_flag(char *s, paramst *params);
int get_modifier(char *s, paramst *params);
char *get_width(char *s, paramst *params, va_list ap);
int print_hex(va_list ap, paramst *params);
int print_HEX(va_list ap, paramst *params);
int print_binary(va_list ap, paramst *params);
int print_octal(va_list ap, paramst *params);
int print_from_to(char *start, char *stop, char *except);
int print_revo(va_list ap, paramst *params);
int print_rot13(va_list ap, paramst *params);
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, paramst *params);
int print_num_right_shift(char *str, paramst *params);
int print_num_left_shift(char *str, paramst *params);
void init_params(paramst *params, va_list ap);
char *get_precision(char *s, paramst *params, va_list ap);
int _printf(const char *format, ...);

#endif
