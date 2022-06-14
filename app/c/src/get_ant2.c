/*
** EPITECH PROJECT, 2022
** ants
** File description:
** get_ant2
*/

#include "lemin.h"

void get_rooms2(char **tab, int i)
{
    for (; tab[i] != NULL; i++) {
        if (my_hash(tab[i]) != 2 )
            break;
        if (my_space(tab[i]) == 2) {
            my_putstr(tab[i]);
            my_putstr("\n");
        }
    }
    for (; tab[i] != NULL; ++i) {
        if (my_hash(tab[i]) == 1)
            break;
    }
    ++i;
    for (; tab[i] != NULL; i++) {
        if (my_space(tab[i]) == 2) {
            my_printf("%s\n", tab[i]);
        }
    }
}
