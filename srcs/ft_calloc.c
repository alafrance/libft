/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:42:10 by alexis            #+#    #+#             */
/*   Updated: 2020/11/03 21:48:44 by alexis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(int nmemb, int size)
{
    void *mem;
    char *c;
    int i;

    i = 0;
    if(!(mem = malloc(size * nmemb)))
        return (NULL);
    c = mem;
    while (i != nmemb)
    {
        c[i] = 0;
        i++;
    }
    return (mem);
}