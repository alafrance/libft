/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:16:16 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/05 11:26:32 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *src;

    src = (char*)s;
    i = 0;
    while (i != n)
    {
        if (c == src[i])
            return ((void*)s + i);
        i++;
    }
    return (NULL);
}