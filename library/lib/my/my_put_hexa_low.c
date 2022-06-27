/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_put_hexa
*/

#include "../../include/my.h"

int my_put_hexa_low(int a)
{
    long newnb = a;
    char base[16] = "O123456789abcdef";

    if (newnb < 0) {
        my_putchar('-');
        newnb = - newnb;
    }
    if (newnb > 16)
        my_put_hexa_low(newnb / 16);
    my_putchar(base[newnb % 16]);
}
