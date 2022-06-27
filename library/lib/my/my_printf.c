/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** myprintf
*/

#include <stdarg.h>
#include "../../include/my.h"

void use_flag(const char *format, int a, va_list list)
{
    switch (format[a + 1]) {
        case 's':
            my_putstr(va_arg(list, char *));
            break;
        case 'i':
            my_put_nbr(va_arg(list, int));
            break;
        case 'c':
            my_putchar(va_arg(list, int));
            break;
        case 'x':
            my_put_hexa_low(va_arg(list, int));
            break;
        case 'X':
            my_put_hexa_hight(va_arg(list, int));
            break;
        case '%':
            my_putchar('%');
            break;
    }
}

void use_flag2(const char *format, int a, va_list list)
{
    switch (format[a + 1]) {
        case 'd':
            my_put_nbr(va_arg(list, int));
            break;
    }
}

void my_printf(const char *format, ...)
{
    va_list list;
    va_start (list, format);

    for (int a = 0; format[a] != '\0'; a++) {
        if (format[a] == '%') {
            use_flag(format , a, list);
            use_flag2(format , a, list);
            a++;
        }
        else
            my_putchar(format[a]);
    }

    va_end(list);
}
