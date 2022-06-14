/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char const *str)
{
    int compteur = 0;

    for (int i = 0; str[i] != '\0'; i++)
        compteur++;
    return compteur;
}

int my_space(char const *str)
{
    int space = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            ++space;
    }
    return space;
}

int my_tiret(char const *str)
{
    int tiret = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            ++tiret;
    }
    return tiret;
}

int my_hash(char const *str)
{
    int tiret = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '#')
            ++tiret;
    }
    return tiret;
}