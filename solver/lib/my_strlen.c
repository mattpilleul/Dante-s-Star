/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

int	my_strlen(char *str)
{
    int	i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}