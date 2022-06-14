/*
** EPITECH PROJECT, 2022
** begin_project
** File description:
** my
*/

#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
void my_putstr(char const *str);
void my_putnbr(int nb);
int my_strlen(char const *str);
int my_strcmp(char const *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
char *my_itoa(int nbr);
void my_swap(int *a, int *b);
char **my_str_to_word_array(char **array, char const *str, char const stop);
char **alloc(char **array, char const *str, char const stop);
int nb_words(char const *str, char const stop);
void my_show_word_array(char **array);
void my_free_tab(char **tab);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcat(char *dest, char const *src);
void check_flags_int(char *s, va_list list, int i);
void check_flags_char(char *s, va_list list, int i);
void check_flags_base(char *s, va_list list, int i);
char *my_putbase(int valeur, char *base);
char *my_putbase_octal(int valeur);
char *my_put_strprintable(char *str);
int my_space(char const *str);
int my_hash(char const *str);
int my_tiret(char const *str);
void my_printf(char *s, ...);

#endif /* !MY_H_ */