/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** main.c
*/

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int, char **, int, int);
void my_putchar(char);
void my_putstr(char *);
void my_put_tab(char **);
int my_get_nbr(char *);
int my_strlen(char *);
int	maze_x(char **);
int	maze_y(char **);
int	multiple_path(char **, int, int);
char **malloc_lab(char *);
char **maze_tab(char **, char *);
int	maze_solver(char **, int **, int, int);
char **solved_maze(char **, int **, int, int);
int	**next_turn(int **, int);
int	**follow_path(int **, int, int, int);
int	check_validity(char **);
int	**init_tab(char **, int, int);
int	**fill_tab(int **, char **);
int	**malloc_tab(int, int);
