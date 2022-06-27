/*
** EPITECH PROJECT, 2022
** Stumper 1
** File description:
** str_to_word_array
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static char **fill_array(char *str, char **array, int nbr_word)
{
    int cpt = 0;

    for (; str[cpt] == ' ' || str[cpt] == '\t'; cpt++);
    for (int i = 0; i < nbr_word; i++) {
        for (int len = 0; str[cpt] != ' ' && str[cpt] != '\t' &&
        str[cpt] != '\0'; cpt++, len++) {
            array[i][len] = str[cpt];
        }
        for (; str[cpt] == ' ' || str[cpt] == '\t' || str[cpt] == '\0'; cpt++);
    }
    return (array);
}

static char **alocate_str(char *str, char **array, int nbr_word)
{
    int w_size = 0;
    int cpt = 0;

    for (; str[cpt] == ' ' || str[cpt] == '\t'; cpt++);
    for (int i = 0; i < nbr_word; i++) {
        for (; str[cpt] != ' ' && str[cpt] != '\t' &&
        str[cpt] != '\0'; w_size++
        , cpt++);
        for (; str[cpt] == ' ' || str[cpt] == '\t' || str[cpt] == '\0'; cpt++);
        array[i] = malloc(sizeof(char) * w_size + 1);
        array[i][w_size] = '\0';
        if (array[i] == NULL)
            return NULL;
        w_size = 0;
    }
    return (array);
}

int count_word(char *str)
{
    int count_word = 0;
    int j = 0;
    int i = 0;

    for (; str[j] == ' ' || str[j] == '\t'; j++);
    for (int i = j; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t')
            count_word ++;
        for (;str[i] == ' ' || str[i] == '\t'; i++);
    }
    count_word += 1;
    if (str[strlen(str) - 1] == ' ' || str[i] == '\t')
        count_word -= 1;
    return (count_word);
}

char **my_str_to_word_array(char *str)
{
    int nbr_word = 0;
    char **array = NULL;

    nbr_word = count_word(str);
    array = malloc(sizeof(char *) * nbr_word + 1);
    array[nbr_word] = NULL;
    array = alocate_str(str, array, nbr_word);
    array = fill_array(str, array, nbr_word);
    return (array);
}
