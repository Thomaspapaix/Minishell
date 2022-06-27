/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++)
        nb = nb * 10 + str[i] - 48;
    return nb;
}
