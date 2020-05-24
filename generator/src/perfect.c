/*
** EPITECH PROJECT, 2020
** Project Nam
** File description:
** ffzf
*/

#include "../include/dante.h"

int my_get_number(gen_t *generate, char **av)
{
    generate->pos_x = atoi(av[1]);
    generate->pos_y = atoi(av[2]);

    if (generate->pos_x <= 0 || generate->pos_y <= 0)
        return (84);
    return (0);
}

void fillin_maze(char **maze, int i, int j)
{
    if (j % 2 == 0 && i % 2 == 0)
        maze[i][j] = '*';
    else if (j % 2 != 0 && i % 2 == 0)
        maze[i][j] = 'X';
    else if (i % 2 != 0)
        maze[i][j] = 'X';
}