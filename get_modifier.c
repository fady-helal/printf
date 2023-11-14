#include "main.h"
int get_modifier(char *s, paramst *params)
{
	int i = 0;

	switch (*s)
	{
	case 'a':
		i = params->a_modifier = 1;
		break;
	case 'b':
		i = params->b_modifier = 1;
		break;
	}
	return (i);
}

