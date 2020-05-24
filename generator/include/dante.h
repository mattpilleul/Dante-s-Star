/*
** EPITECH PROJECT, 2020
** dante
** File description:
** my
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#ifndef DANTE_H_
#define DANTE_H_

typedef struct gen_s {
    int right;
    int top;
    int pos_x;
    int pos_y;
} gen_t;

char **malloc_lab(gen_t *, char **);
void perfect_shot(char **, gen_t *);
int my_strcmp(char *str1, char *str2);
int my_get_number(gen_t *, char **);
char **generate_maze(char **, gen_t *);
void fillin_maze(char **, int, int);
void generate_imperfect(char **, gen_t *);
void generate_perfect(char **, gen_t *);
void change_array(gen_t *, char **);
void display_maze(char **, gen_t *);

#endif
