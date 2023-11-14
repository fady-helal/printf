#include "main.h"
int print_num_right_shift(char *str, paramst *params)
{
	unsigned int n = 0, neg, neg2, i = _strlen(str);
	char pad_char = ' ';

	if (params->z_flag && !params->m_flag)
		pad_char = '0';
	neg = neg2 = (!params->unsignn && *str == '-');
	if (neg && i < params->width && pad_char == '0' && !params->m_flag)
		str++;
	else
		neg = 0;
	if ((params->p_flag && !neg2) ||
		(!params->p_flag && params->s_flag && !neg2))
		i++;
	if (neg && pad_char == '0')
		n += _putchar('-');
	if (params->p_flag && !neg2 && pad_char == '0' && !params->unsignn)
		n += _putchar('+');
	else if (!params->p_flag && params->s_flag && !neg2 &&
		!params->unsignn && params->z_flag)
		n += _putchar(' ');
	while (i++ < params->width)
		n += _putchar(pad_char);
	if (neg && pad_char == ' ')
		n += _putchar('-');
	if (params->p_flag && !neg2 && pad_char == ' ' && !params->unsignn)
		n += _putchar('+');
	else if (!params->p_flag && params->s_flag && !neg2 &&
		!params->unsignn && !params->z_flag)
		n += _putchar(' ');
	n += _puts(str);
	return (n);
}
