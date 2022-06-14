/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_get_nbr
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    int result = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '\0')
            neg = neg * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    result = result * neg;
    return result;
}
