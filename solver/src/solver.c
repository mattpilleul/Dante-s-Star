/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include "../include/my.h"

int maze_solver(char **lab, int **solver, int i, int j)
{
    int	a;

    for (a = 1; solver[j][i] == -1; a++)
        solver = next_turn(solver, a);
    lab = solved_maze(lab, solver, i, j);
    display_maze(lab);
    for (a = 0; solver[a] != '\0'; a++)
        free(solver[a]);
    free(solver);
    return (0);
}

char **solved_maze(char **lab, int **solver, int i, int j)
{
    int	a = solver[j][i] - 1;

    lab[j][i] = 'o';
    for (; j != 0 || i != 0; a--){
        if (i != 0 && solver[j][i - 1] == a)
            i--;
        else if (j != 0 && solver[j - 1][i] == a)
            j--;
        else if (solver[j][i + 1] == a)
            i++;
        else
            j++;
        lab[j][i] = 'o';
    }
    return (lab);
}

int **next_turn(int **solver, int a)
{
    int	i = 0;
    int	j = 0;

    for (j = 0; solver[j] != '\0'; j++){
        for (i = 0; solver[j][i] != -3; i++){
            if (solver[j][i] == (a - 1))
                solver = follow_path(solver, j, i, a);
            if ((i + j) >  a)
                break ;
        }
        i = 0;
    }
    return (solver);
}

int **follow_path(int **solv, int n, int i, int k)
{
    (n != 0 && solv[n - 1][i] == -1) ? solv[n - 1][i] = k : 0;
    (i != 0 && solv[n][i - 1] == -1) ? solv[n][i - 1] = k : 0;
    (solv[n][i + 1] == -1) ? solv[n][i + 1] = k : 0;
    if (solv[n + 1] != '\0' && solv[n + 1][i] == -1)
        solv[n + 1][i] = k;
    return (solv);
}
