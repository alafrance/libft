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
    void    *mem;

    if (count < 0 || size < 0)
        return (NULL);
    if (!(mem = malloc(size * count)))
        return (NULL);
    ft_bzero(mem, count * size);
    return (mem);
}