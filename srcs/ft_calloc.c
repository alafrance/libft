/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:42:10 by alexis            #+#    #+#             */
/*   Updated: 2020/11/04 14:17:44 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *mem;
    char *c;
    size_t i;

    i = 0;
    if(!(mem = malloc(size * count)))
        return (NULL);
    c = mem;
    while (i != count)
    {
        c[i] = 0;
        i++;
    }
    return (mem);
}