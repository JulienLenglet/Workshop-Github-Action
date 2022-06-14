/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my_swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int temporaire = *a;

    *a = *b;
    *b = temporaire;
}
