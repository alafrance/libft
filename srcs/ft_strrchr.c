/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:51:05 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 12:53:43 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int r;

    r = -1;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            r = i;
        i++;
    }
    if (r != -1)
        return ((char*)s + r);
    else
        return (NULL);
}