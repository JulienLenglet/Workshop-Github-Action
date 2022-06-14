/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_putnbr
*/

#include "my.h"

void my_putnbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            i = nb % 10;
            nb = (nb - i) / 10;
            my_putnbr(nb);
            my_putchar(48 + i);
        } else
            my_putchar(48 + nb % 10);
    }
}
