/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

int	**init_tab(char **lab, int i, int j)
{
    int	**solver;

    solver = malloc_tab(i, j);
    solver = fill_tab(solver, lab);
    return (solver);
}

int **fill_tab(int **solver, char **lab)
{
    int i = 0;
    int j = 0;

    for (j = 0; lab[j] != '\0'; j++){
        for (i = 0; lab[j][i] != '\0'; i++){
            if (lab[j][i] == '*')
                solver[j][i] = -1;
            else if (lab[j][i] == 'X')
                solver[j][i] = -2;
        }
        i = 0;
    }
    solver[0][0] = 0;
    return (solver);
}

int **malloc_tab(int j, int k)
{
    int **solver;
    int i = 0;

    k++;
    if ((solver = malloc(sizeof(int *) * (k + 1))) == NULL)
        exit(84);
    solver[k] = '\0';
    for (i = 0; i != k; i++){
        if ((solver[i] = malloc(sizeof(int) * (j + 2))) == NULL)
            exit(84);
        solver[i][j + 1] = -3;
    }
    return (solver);
}

int	check_validity(char **lab)
{
    int	k = 0;
    int	i = 0;
    int	j = 0;

    for (k = 0; lab[0][k] != '\0'; k++);
    for (j = 0; lab[j] != '\0'; j++){
        for (i = 0; lab[j][i] != '\0'; i++){
            if (lab[j][i] != '*' && lab[j][i] != 'X'){
                my_putstr("invalid character in map");
                return (84);
            }
        }
        if (i != k)
            return (84);
        i = 0;
    }
    if (lab[0][0] != '*' || lab[j - 1][k - 1] != '*'){
        my_putstr("no solution found");
        return (84);
    }
    return (0);
}