/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_find_prime_sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int recup = my_is_prime(nb);
    if (recup == 1)
        return nb;
    while (recup == 0) {
        recup = my_is_prime(nb);
        nb = nb + 1;
    }
    nb = nb - 1;
    return nb;
}
