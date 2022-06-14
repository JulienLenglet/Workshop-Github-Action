/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_putstrprintable
*/

#include "my.h"

char *my_put_strprintable(char *str)
{
    int valeur = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            my_putchar(92);
            valeur = str[i] - '0';
            my_putbase_octal(valeur);
        } else
            my_putchar(str[i]);
    }
}
