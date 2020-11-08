/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:11:23 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/05 12:11:51 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *dest;
    unsigned char   *source;
    size_t          i;

    i = len + 1;
    dest =  (unsigned char *)dst;
    source = (unsigned char *)src;
    if (dst < src)
        ft_memcpy(dst, src, len);
    else if (dst > src)
        while (--i)
            dest[i - 1] = source[i - 1];
    return (dst);
}