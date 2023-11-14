#include "main.h"
char *get_precision(char *s, paramst *params, va_list ap)
{
	int d = 0;

	if (*s != '.')
		return (s);
	s++;
	if (*s == '*')
	{
		d = va_arg(ap, int);
		if (d < 0)
		{
			
			d = 0;
		}
		s++;
	}
	else
	{
		while (_isdigit(*s))
		{
			
			d = d * 10 + (*s++ - '0');
		}
	}

	if (d > INT_MAX)
	{
		d = INT_MAX;
	}
	params->precision = d;
	return (s);
}
