/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    char s;

    for (int i = 0; i < len; i++) {
        s = str[i];
        str[i] = str[len];
        str[len] = s;
        len--;
    }
    return str;
}
