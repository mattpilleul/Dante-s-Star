/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** rgr
*/

#include "../include/dante.h"

void generate_imperfect(char **maze, gen_t *generate)
{
    maze = generate_maze(maze, generate);
    change_array(generate, maze);
    perfect_shot(maze, generate);
    display_maze(maze, generate);
}

void generate_perfect(char **maze, gen_t *generate)
{
    maze = generate_maze(maze, generate);
    change_array(generate, maze);
    display_maze(maze, generate);
}

char **generate_maze(char **maze, gen_t *generate)
{
    int i = 0;
    int j = 0;

    while (i < generate->pos_y) {
        j = 0;
        while (j < generate->pos_x) {
            fillin_maze(maze, i, j);
            j++;
        }
        i++;
    }
    return (maze);
}