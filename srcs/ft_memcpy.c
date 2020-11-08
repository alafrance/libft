/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:35:48 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/05 12:04:13 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *source;
    unsigned char *dest;

    source = (unsigned char*)src;
    dest = (unsigned char*)dst;
    if (dst == NULL && src == NULL)
        return (NULL);
    i = 0;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dst);

}