/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_putbase_octal
*/

#include "my.h"

int check_nb_valeur(int valeur)
{
    if (valeur < 9) {
        my_putstr("00");
        my_putnbr(valeur);
    }
    return 1;
}

void check_size_octal(char *str, int j)
{
    if (my_strlen(str) < 3)
        str[j + 1] = '0';
    str = my_revstr(str);
}

char *my_putbase_octal(int valeur)
{
    char *str;
    char *base_8 = "01234567";
    int result;
    int temp;
    int j = 0;

    check_nb_valeur(valeur);
    str = malloc(sizeof(char) * valeur);
    for (int i = 0; valeur > 8; i++) {
        result = valeur % 8;
        str[j] = base_8[result];
        j++;
        if ((valeur / 8) < 8) {
            temp = valeur / 8;
            str[j] = base_8[temp];
        }
        valeur = valeur / 8;
    }
    check_size_octal(str, j);
}
