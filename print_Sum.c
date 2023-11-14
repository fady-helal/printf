#include "main.h"
int print_Sum(va_list ap, paramst *params)
{
        char *str = va_arg(ap, char *);
        char *hex;
        int sum = 0;

        if ((int)(!str))
                return (_puts(NULL_STRING));
        for (; *str; str++)
        {
                if ((*str > 0 && *str < 32) || *str >= 127)
                {
                        sum += _putchar('\\');
                        sum += _putchar('x');
                        hex = convert(*str, 16, 0, params);
                        if (!hex[1])
                                sum += _putchar('0');
                        sum += _puts(hex);
                }
                else
                {
                        sum += _putchar(*str);
                }
        }
        return (sum);
}
