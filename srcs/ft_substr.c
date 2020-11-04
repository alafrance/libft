/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:15:14 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 15:00:28 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *buf;
    size_t size;
    size_t i;

    i = 0;
    size = 0;
    if (start > (unsigned int)ft_strlen(s))
        return (NULL);
    while(size < len && s[start + size])
        size++;
    if (!(buf = malloc(sizeof(char) * (size + 1))))
        return (NULL);
    while(s[start] && i < len)
        buf[i++] = s[start++];
    buf[i] = '\0';
    return (buf);
}