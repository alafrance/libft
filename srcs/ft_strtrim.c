/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:02:05 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 15:07:04 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_a_set(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    char *buf;

    if (s1 == NULL)
        return (NULL);
    i = 0;
    j = ft_strlen(s1) - 1;
    k = 0;
    while (is_a_set(s1[i], set) && s1[i])
        i++;
    while (is_a_set(s1[j], set) && j != 0)
        j--;
    if (i >= j)
    {
        if (!(buf = malloc(sizeof(char) * (1))))
            return (NULL);
        buf[0] = 0;
        return (buf);
    }
    if (!(buf = malloc(sizeof(char) * (j - i + 2))))
        return (NULL);
    while (i <= j)
    {
        buf[k++] = s1[i++];
    }
    buf[k] = '\0';
    return (buf);
}