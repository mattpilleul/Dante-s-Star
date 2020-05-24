/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

void display_maze(char **lab)
{
    int i = 0;

    while (lab[i + 1] != NULL) {
        my_putstr(lab[i]);
        my_putstr("\n");
        i++;
    }
    my_putstr(lab[i]);
}