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

int is_a_set(char c, char const *set)
{
    int i;

    i = 0;
    while(set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int count_size_buf_trim(char const *s1, char const *set)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s1[i])
    {
        if (!is_a_set(s1[i], set))
            count++;
        i++;
    }
    return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    char *buf;

    i = 0;
    j = 0;
    if (!(buf = malloc(sizeof(char) * (count_size_buf_trim(s1, set) + 1))))
        return (NULL);
    while (s1[i])
    {
        if (!is_a_set(s1[i], set))
            buf[j++] = s1[i];
        i++;
    }
    buf[j] = '\0';
    return (buf);
}