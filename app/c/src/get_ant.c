/*
** EPITECH PROJECT, 2022
** ants
** File description:
** get_ant
*/

#include "lemin.h"

void get_rooms(char **tab)
{
    int i = 0;

    my_putstr("#rooms\n");
    for (; my_hash(tab[i]) != 2; i++) {
        if (my_space(tab[i]) == 2) {
            my_putstr(tab[i]);
            my_putstr("\n");
        }
    }
    for (; tab[i] != NULL; ++i) {
        if (my_hash(tab[i]) == 1)
            break;
    }
    get_rooms2(tab, i);
}

void get_tunnel(char **tab)
{
    my_putstr("#tunnels\n");
    for (int i = 0; tab[i] != NULL; i++) {
        if (my_tiret(tab[i]) == 1) {
            my_putstr(tab[i]);
            my_putstr("\n");
        }
    }
}

void get_end(char **tab)
{
    int i = 0;

    my_putstr("##end\n");
    for (; my_strcmp(tab[i], "##end") == 1; i++);
    ++i;
    for (; tab[i] != NULL && tab[i][0] != '#' ; ++i) {
        if (my_space(tab[i]) == 2) {
            my_putstr(tab[i]);
            my_putstr("\n");
        }
    }
}

void get_start(char **tab)
{
    int i = 0;

    my_putstr("##start\n");
    for (; my_strcmp(tab[i], "##start") == 1; ++i);
    i = i + 1;
    for (; tab[i][0] != '#'; ++i) {
        if (my_space(tab[i]) == 2) {
            my_putstr(tab[i]);
            my_putstr("\n");
        }
    }

}

void get_ants(char **tab)
{
    int i = 0;

    for (; tab[i][0] == '#'; ++i);
    my_putstr("#number_of_ants\n");
    my_putstr(tab[i]);
    my_putstr("\n");
}