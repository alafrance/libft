/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:35:48 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/05 11:03:59 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *source;
    unsigned char *dest;

    source = (unsigned char*)src;
    dest = (unsigned char*)dst;
    i = 0;
    if (dst == NULL && src == NULL)
        return (NULL);
    while (i < n)
    {
        dest[i] = source[i];
        if (source[i] == (unsigned char)c)
           return (dst + i + 1);
        i++;
    }
    return (0);

}