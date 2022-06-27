/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_put_hexa_hight
*/

#include "../../include/my.h"

int my_put_hexa_hight(int a)
{
    long newnb = a;
    char base[16] = "0123456789ABCDEF";

    if (newnb < 0) {
        my_putchar('-');
        newnb = - newnb;
    }
    if (newnb > 16)
        my_put_hexa_hight(newnb / 16);
    my_putchar(base[newnb % 16]);
}
