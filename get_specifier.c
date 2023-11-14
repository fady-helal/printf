#include "main.h"
int (*get_specifier(char *s))(va_list ap, paramst *params)
{
        specifiert specifiers[] = {
                {"c", print_char},
                {"d", print_int},
                {"i", print_int},
                {"s", print_string},
                {"%", print_percent},
                {"b", print_binary},
                {"o", print_octal},
                {"u", print_unsigned},
                {"x", print_hex},
                {"X", print_HEX},
                {"p", print_address},
                {"S", print_Sum},
                {"r", print_revo},
                {"R", print_rot13},
                {NULL, NULL}
        };
        int i = 0;

        while (specifiers[i].specifier)
        {
                if (*s == specifiers[i].specifier[0])
                {
                        return (specifiers[i].f);
                }
                i++;
        }
        return (NULL);
}
