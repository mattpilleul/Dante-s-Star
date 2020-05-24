/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

void my_putstr(char *str)
{
    int	i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}