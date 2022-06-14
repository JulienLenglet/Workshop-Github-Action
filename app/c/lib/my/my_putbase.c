/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_putbase
*/

#include "my.h"

int check_size(int valeur, char *base_16)
{
    if (valeur == 16)
        my_putstr("10");
    if (valeur < 16 && valeur > 9)
        my_putchar(base_16[valeur]);
    if (valeur < 10) {
        my_putchar('0');
        my_putchar(base_16[valeur]);
    }
    return 1;
}

char *my_putbase(int valeur, char *base)
{
    char *str;
    char *base_16 = base;
    int result;
    int temp;
    int j = 0;

    str = malloc(sizeof(char) * 3);
    check_size(valeur, base_16);
    for (int i = 0; valeur > 16; i++) {
        result = valeur % 16;
        str[j] = base_16[result];
        j++;
        if ((valeur / 16) < 16) {
            temp = valeur / 16;
            str[j] = base_16[temp];
        }
        valeur = valeur / 16;
    }
    str = my_revstr(str);
    my_putstr(str);
}
