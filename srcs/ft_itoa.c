/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:14:43 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 13:26:07 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int size_n(int nb)
{
    int count;

    count = 1;
    while (nb >= 10)
    {
        count++;
        nb /= 10;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    long nb;
    int sign;
    char *buf;
    int i;
    i = 0;
    nb = n;
    sign = 1;
    if (nb < 0)
    {
        nb = -nb;
        if (!(buf = malloc(sizeof(char) * (size_n(nb) + 2))))
            return (NULL);
        sign = -1;
    }
    else
        if (!(buf = malloc(sizeof(char) * (size_n(nb) + 1))))
            return (NULL);
    while (nb >= 10)
    {
        buf[i++] = nb % 10 + '0';
        nb /= 10;
    }
    buf[i++] = nb % 10 + '0';
    if (sign == -1)
        buf[i++] = '-';
    buf[i] = '\0';
    return (ft_strrev(buf));
}