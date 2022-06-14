/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_show_word_array
*/

#include "my.h"

void my_show_word_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}
