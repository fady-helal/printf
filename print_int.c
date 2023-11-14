#include "main.h"
int print_int(va_list ap, paramst *params)
{
        long l;

        if (params->b_modifier)
                l = va_arg(ap, long);
        else if (params->b_modifier)
                l = (short int)va_arg(ap, int);
        else
                l = (int)va_arg(ap, int);
       return (print_number(convert(l, 10, 0, params), params));
}
