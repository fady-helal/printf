#include "main.h"
int get_flag(char *s, paramst *params)
{
	int i = 0;

	switch (*s)
	{
		case '+':
			i = params->p_flag = 1;
			break;
		case ' ':
			i = params->s_flag = 1;
			break;
		case '#':
			i = params->h_flag = 1;
			break;
		case '-':
			i = params->m_flag = 1;
			break;
		case '0':
			i = params->z_flag = 1;
			break;
	}
	return (i);
}
