/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

int	main(int argc, char **argv, int i, int j)
{
    struct stat	buff;
    char *filepath;
    char **lab;

    if ((i = open(argv[1], O_RDONLY)) == - 1 || argc != 2)
        return (84);
    stat(argv[1], &buff);
    if ((filepath = malloc(sizeof(char) * (buff.st_size + 1))) == NULL)
        return (84);
    i = read(i, filepath, buff.st_size);
    filepath[i] = '\0';
    lab = malloc_lab(filepath);
    lab = maze_tab(lab, filepath);
    if (check_validity(lab) == 84)
        return (84);
    i = maze_x(lab);
    j = maze_y(lab);
    i = maze_solver(lab, init_tab(lab, i, j), i, j);
    while (lab[i] != '\0')
        free(lab[i++]);
    free(lab);
    free(filepath); return (0);
}