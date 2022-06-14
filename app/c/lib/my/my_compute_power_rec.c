/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int power)
{
    int test = my_compute_power_rec(nb , power - 1) * nb;

    if (power == 0)
        return 1;
    if (power < 0)
        return 0;
    return test;
}