/*
** EPITECH PROJECT, 2022
** B-CPE-200-PAR-2-1-dante-noah.tesson
** File description:
** open_file
*/

#include "lemin.h"

char **get_file(void)
{
    int i = 0;
    FILE *fp = stdin;
    char *line_buf = NULL;
    size_t len = 0;
    ssize_t line_size;
    char *temp = NULL;
    char *str_result = malloc(sizeof(char) * 1);
    char **tab = NULL;

    while (getline(&line_buf, &len, fp) != -1) {
        str_result = my_strcat(str_result, line_buf);
    }
    free(line_buf);
    tab = my_str_to_word_array(tab, str_result, '\n');
    free(str_result);
    return tab;
}
