/*
** EPITECH PROJECT, 2020
** strcmp.c
** File description:
** com
*/

int my_strcmp(char *str1, char *str2)
{
    int i = 0;

    while ((str1[i] == str2[i] && (str1[i] != '\0' && str2[i] != '\0')))
        i++;
    return (str1[i] - str2[i]);
}
