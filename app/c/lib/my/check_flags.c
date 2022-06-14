/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** check_flags
*/

#include "my.h"

void check_flags_int(char *s, va_list list, int i)
{
    if (s[i] == '%' && s[i + 1] == 'i') {
        my_putnbr(va_arg(list, int));
    }
    if (s[i] == '%' && s[i + 1] == 'd') {
        my_putnbr(va_arg(list, int));
    }
}

void check_flags_char(char *s, va_list list, int i)
{
    if (s[i] == '%' && s[i + 1] == 'c') {
        my_putchar(va_arg(list, int));
    }
    if (s[i] == '%' && s[i + 1] == 's') {
        my_putstr(va_arg(list, char *));
    }
    if (s[i] == '%' && s[i + 1] == 'S') {
        my_put_strprintable(va_arg(list, char *));
    }
}

void check_flags_base(char *s, va_list list, int i)
{
    char *base;

    if (s[i] == '%' && s[i + 1] == 'x') {
        base = "0123456789abcdef";
        my_putbase(va_arg(list, int), base);
    }
    if (s[i] == '%' && s[i + 1] == 'X') {
        base = "0123456789ABCDEF";
        my_putbase(va_arg(list, int), base);
    }
    if (s[i] == '%' && s[i + 1] == 'p') {
        base = "0123456789abcdef";
        my_putstr("0x");
        my_putbase(va_arg(list, int), base);
    }
    if (s[i] == '%' && s[i + 1] == 'o') {
        my_putbase_octal(va_arg(list, int));
    }
}
