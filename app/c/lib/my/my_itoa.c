/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_itoa
*/

#include "my.h"

char *my_itoa(int nbr)
{
    char *str = malloc(sizeof(char) * 11);
    int i = 0;

    for (;nbr >= 10; i++) {
        str[i] = (nbr % 10) + '0';
        nbr = nbr / 10;
    }
    str[i] = nbr + '0';
    str[i + 1] = '\0';
    str = my_revstr(str);
    return str;
}
