/*
** EPITECH PROJECT, 2020
** pr
** File description:
** main
*/

#include "../include/dante.h"

char **malloc_lab(gen_t *generate, char **maze)
{
    int i = 0;

    maze = malloc(sizeof(char *) * (generate->pos_y + 2));
    if (maze == NULL)
        return (NULL);
    i = 0;
    while (i <= generate->pos_y){
        maze[i] = malloc(sizeof(char) * (generate->pos_x + 1));
        i++;
    }
    if (maze[0] == NULL)
        return (NULL);
    maze[i] = NULL;
    return (maze);
}

void perfect_shot(char **maze, gen_t *generate)
{
    int y = 0;
    int x = 0;
    int i = 0;
    int number = (generate->pos_x * generate->pos_y) / 2;

    while (i < number){
        y = rand() % generate->pos_x;
        x = rand() % generate->pos_y;
        maze[x][y] = '*';
        i++;
    }
}