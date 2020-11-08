/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:49:50 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/05 12:03:02 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *us1;
    unsigned char *us2;

    i = 0;
    us1 = (unsigned char*)s1;
    us2 = (unsigned char*)s2;
    while (i != n - 1 && us1[i] == us2[i])
        i++;
    return (us1[i] - us2[i]);
}