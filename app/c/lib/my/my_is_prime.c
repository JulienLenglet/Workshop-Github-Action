/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_is_prime
*/

#include "my.h"

int my_is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return 1;
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
