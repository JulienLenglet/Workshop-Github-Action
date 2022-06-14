/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_putstr
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
