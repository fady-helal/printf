#include "main.h"
void init_params(paramst *params, va_list ap)
{
	params->unsignn = 0;

	params->p_flag = 0;
	params->s_flag = 0;
	params->h_flag = 0;
	params->z_flag = 0;
	params->m_flag = 0;

	params->width = 0;
	params->precision = UINT_MAX;

	params->a_modifier = 0;
	params->b_modifier = 0;
	(void)ap;
}
