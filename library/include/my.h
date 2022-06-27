/*
** EPITECH PROJECT, 2021
** Day 09
** File description:
** Include prototype
*/

#ifndef MY_H
    #define MY_H

    #include <stdarg.h>
    #include <stdlib.h>

int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int a);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
char *my_str_isalpha(char const *str);
int is_lower(char c);
char *my_str_isnum(char const *str);
char *my_str_isprintable(char const *str);
char *my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, const char *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, const char *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char **my_str_to_word_array(const char *str);
void my_swap(int *a, int *b);
int is_lower(char c);
char *my_strdup(char const *src);
int my_put_hexa_low(int a);
int my_put_hexa_hight(int a);
void use_flag(const char *format, int a, va_list list);
void use_flag2(const char *format, int a, va_list list);
void my_printf(const char *format, ...);
int my_atoi(char *str);
char *take_path(char *str);
int exec_builtin_exit(char **env, char **array);

#endif/* MY_H */
