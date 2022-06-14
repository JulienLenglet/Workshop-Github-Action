/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_printf
*/

#include "my.h"

void check_flags(char *s, va_list list, int i)
{
    check_flags_int(s, list, i);
    check_flags_char(s, list, i);
    check_flags_base(s, list, i);
}

void flags(char *s, int i, va_list list)
{
    if (s[i] == '%' && s[i + 1] == '%')
        my_putchar('%');
    check_flags(s, list, i);
}

void my_printf(char *s, ...)
{
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '%') {
            flags(s, i, list);
        i++;
        } else {
            my_putchar(s[i]);
        }
    }
    va_end(list);
}
