/*
** EPITECH PROJECT, 2022
** B-PSU-101-TLS-1-1-minishell1-thomas.papaix
** File description:
** tools
*/
#include "../library/include/my.h"

char *take_path(char *str)
{
    str[0] = '/';
    str[1] = 'b';
    str[2] = 'i';
    str[3] = 'n';
    str[4] = '/';
    str[5] = '\0';
    return (str);
}

int exec_builtin_exit(char **env, char **array)
{
    if (array[0][0] == 'e' && array[0][1] == 'x' && array[0][2] == 'i' &&
    array[0][3] == 't' && my_strlen(array[0]) == 4) {
        my_printf("exit\n");
        exit(0);
    }
}
