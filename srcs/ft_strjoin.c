/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:34:52 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 13:08:19 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *buf;

    if (s1 == NULL)
        return ((char*)s2);
    if (s2 == NULL)
        return ((char*)s1);
    if (!(buf = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    i = 0;
    j = 0;
    while (s1[j])
        buf[i++] = s1[j++];
    j = 0;
    while (s2[j])
        buf[i++] = s2[j++];
    buf[i] = '\0';
    return (buf);
}