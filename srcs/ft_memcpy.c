/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:35:48 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 18:12:24 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char*)src;
    d = (unsigned char*)dst;
    i = 0;
    while (i != n)
    {
        d[i] = s[i];
        i++;
    }
    return (0);

}