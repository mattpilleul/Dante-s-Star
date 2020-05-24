/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** vffe
*/

#include "../include/dante.h"

void generate_lab(char **maze, int i, int j, gen_t *generate)
{
    int random = rand() % 2;

    if (i - 1 >= 0 && maze[i - 1][j] == 'X')
        generate->top = 1;
    if (j - 1 >= 0 && maze[i][j - 1] == 'X')
        generate->right = 1;
    if (i - 1 >= 0 && generate->top == 1 && generate->right == 0)
        maze[i - 1][j] = '*';
    if (j - 1 >= 0 && generate->top == 0)
        maze[i][j - 1] = '*';
    if (j - 1 >= 0 && random == 0)
        maze[i][j - 1] = '*';
    else if (i - 1 >= 0 && random == 1)
        maze[i - 1][j] = '*';
}

void change_array(gen_t *generate, char **maze)
{
    int i = 0;
    int j = 0;

    while (i <= generate->pos_y) {
        generate->top = 0;
        generate->right = 0;
        j = 0;
        while (j < generate->pos_x) {
            if (i == 0){
                maze[i][j] = '*';
            }
            generate_lab(maze, i, j, generate);
            j += 2;
        }
        i += 2;
    }
}

void display_maze(char **maze, gen_t *generate)
{
    int i = 0;

    maze[generate->pos_y - 1][generate->pos_x - 1] = '*';
    for (i = 0; i < generate->pos_y - 1;) {
        write(1, maze[i++], generate->pos_x);
        write(1, "\n", 1);
    }
    write(1, maze[i], generate->pos_x);
}