/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:56:24 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 13:02:52 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *buf;
    unsigned int     i;

    i = 0;
    if (s == NULL)
        return (NULL);
    if (!(buf = malloc(sizeof(char) * (ft_strlen(s) + 1))))
        return (NULL);
    while (s[i])
    {
        buf[i] = f(i, s[i]);
        i++;
    }
    buf[i] = '\0';
    return (buf);
}