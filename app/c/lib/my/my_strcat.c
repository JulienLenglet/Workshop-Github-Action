/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int j = 0;
    int size = my_strlen(dest) + my_strlen(src);
    char *str = malloc(sizeof(char) * size + 1);

    for (int i = 0; i < size; i++) {
        if (i < my_strlen(dest))
            str[i] = dest[i];
        else {
            str[i] = src[j];
            j++;
        }
    }
    str[size + 1] = '\0';
    return str;
}
