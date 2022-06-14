/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_str_to_word_array
*/

#include "my.h"

int nb_words(char const *str, char const stop)
{
    int d = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != stop)
            d++;
    }
    return d;
}

char **alloc(char **array, char const *str, char const stop)
{
    int compt_malloc = 0;
    int compt_indice = 0;

    array = malloc(sizeof(char *) * nb_words(str, stop));
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != stop && str[i + 1] != '\0')
            compt_malloc++;
        else {
            array[compt_indice] = malloc(sizeof(char) * compt_malloc + 1);
            compt_malloc = 0;
            compt_indice++;
        }
    }
    array[compt_indice] = NULL;
    return array;
}

char **my_str_to_word_array(char **array, char const *str, char const stop)
{
    int b = 0;
    int c = 0;

    array = alloc(array, str, stop);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != stop) {
            array[b][c] = str[i];
            c++;
        } else {
            array[b][c] = '\0';
            c = 0;
            b++;
        }
    }
    array[b + 1] = NULL;
    return array;
}
