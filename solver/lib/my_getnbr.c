/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

int	my_get_nbr(char *str)
{
    int	i = 0;
    int	n = 0;

    for (i = 0; str[i] != '\0'; i++){
        if (str[i] <= 47 || str[i] >= 58)
            return (-1);
        n = (10 * n) + (str[i] - '0');
    }
    return (n);
}