/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char const *dest, char const *src)
{
    if (my_strlen(dest) != my_strlen(src))
        return 1;
    for (int i = 0; dest[i] != '\0'; i++) {
        if (dest[i] != src[i])
            return 1;
    }
    return 0;
}
