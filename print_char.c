#include "main.h"
int print_char(va_list ap, paramst *params)
{
        char pad_char = ' ';
        unsigned int pad = 1, sum = 0, ch = va_arg(ap, int);

        if (params->m_flag)
                sum += _putchar(ch);
        while (pad++ < params->width)
                sum += _putchar(pad_char);
        if (!params->m_flag)
                sum += _putchar(ch);
        return (sum);
}
