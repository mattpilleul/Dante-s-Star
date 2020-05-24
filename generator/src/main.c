/*
** EPITECH PROJECT, 2020
** pr
** File description:
** main
*/

#include "../include/dante.h"

int main(int ac, char **av)
{
    gen_t *generate = malloc(sizeof(gen_t));
    char **maze = NULL;

    srand(time(NULL) + getpid());
    generate->top = 0;
    generate->right = 0;
    if (ac == 4 && my_strcmp(av[3], "perfect") == 0) {
        if (my_get_number(generate, av) == 84)
            return (84);
        if (!(maze = malloc_lab(generate, maze)))
            return (84);
        generate_perfect(maze, generate);
    } else if (ac == 3) {
        if (my_get_number(generate, av) == 84)
            return (84);
        if (!(maze = malloc_lab(generate, maze)))
            return (84);
        generate_imperfect(maze, generate);
    } else
        return (84);
}
