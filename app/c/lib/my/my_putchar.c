/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
