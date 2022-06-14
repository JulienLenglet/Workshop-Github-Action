/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** main
*/

#include "lemin.h"

int main(int ac, char **av)
{
    char **str = get_file();

    get_ants(str);
    get_rooms(str);
    get_start(str);
    get_end(str);
    get_tunnel(str);
}
