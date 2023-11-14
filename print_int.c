#include "main.h"
int print_int(va_list ap, params_t *params)
{
        long l;

        if (params->L_modifier)
                l = va_arg(ap, long);
        else if (params->h_modifier)
                l = (short int)va_arg(ap, int);
        else
                l = (int)va_arg(ap, int);
        return (print_number(convert(l, 10, 0, params), params));
}
