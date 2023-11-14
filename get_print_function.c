#include "main.h"
int get_print_funcion(char *s, va_list ap, paramst *params)
{
        int (*f)(va_list, paramst *) = get_specifier(s);

        if (f)
                return (f(ap, params));
        return (0);
}
