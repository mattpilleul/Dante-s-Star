/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

char **malloc_lab(char *filepath)
{
    char **lab;
    int	i = 0;
    int	j = 1;
    int	k = 0;

    for (i = 0; filepath[i] != '\0'; i++){
        if (filepath[i] == '\n')
            j++;
    }
    if ((lab = malloc(sizeof(char *) * (j + 1))) == NULL)
        exit(84);
    lab[j] = NULL;
    for (k = 0; k != j; k++){
        if ((lab[k] = malloc(sizeof(char) * ((i / j) + 1))) == NULL)
            exit(84);
        lab[k][i / j] = '\0';
    }
    return (lab);
}

char **maze_tab(char **lab, char *filepath)
{
    int	i = 0;
    int	j = 0;
    int	k = 0;

    for (i = 0; filepath[i] != '\0'; i++){
        if (filepath[i] == '\n'){
            k++;
            j = 0;
            i++;
        }
        lab[k][j] = filepath[i];
        j++;
    }
    return (lab);
}

int	maze_x(char **lab)
{
    int	i = 0;

    while (lab[0][i] != '\0')
        i++;
    return (i - 1);
}

int	maze_y(char **lab)
{
    int	i = 0;

    for (i = 0; lab[i] != '\0'; i++);
    return (i - 1);
}