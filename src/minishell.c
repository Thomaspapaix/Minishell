/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "../library/include/my.h"

int exe_prog(char **env, char **array)
{
    int return_value = 0;
    char *str = NULL;
    pid_t verif = 0;
    int i = 0;

    str = malloc(sizeof(char) * (6 + my_strlen(array[0])));
    str = take_path(str);
    str = my_strcat(str, array[0]);
    for (; str[i] != '\n'; i++);
    str[i] = str[i + 1];
    verif = fork();
    if (verif == 0)
        return_value = execve(str, array, env);
    else
        waitpid(verif, NULL, 0);
    if (return_value == -1)
        exit(84);
}

int exec_builtin(char **env, char **array)
{
    int len = 0;

    exec_builtin_exit(env, array);
    if (array[0][0] == 'e' && array[0][1] == 'n' && array[0][2] == 'v' &&
    my_strlen(array[0]) == 3) {
        for (int i = 0; env[i] != NULL; i++)
            my_printf("%s\n", env[i]);
        return (1);
    }
    for (; array[len] != NULL; len++);
    if (array[0][0] == 'c' && array[0][1] == 'd') {
        if (len == 1)
            chdir("/home");
        if (len > 1)
            chdir(array[1]);
        return (1);
    }
    return (0);
}

char **take_commande(const char **av)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char **array = NULL;

    read = getline(&line, &len, stdin);
    if (read == -1) {
        my_printf("\n");
        exit(0);
    }
    array = my_str_to_word_array(line);
    if (line)
        free(line);
    return (array);
}

int main(int ac, const char **av, char **env)
{
    char **array = NULL;
    int check = 0;

    while (1) {
        my_printf("$> ");
        array = take_commande(av);
        check = exec_builtin(env, array);
        if (check == 0)
            exe_prog(env, array);
    }
    return (0);
}
