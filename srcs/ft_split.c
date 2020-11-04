/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 11:09:25 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/04 13:09:16 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *malloc_a_case(const char *str, char c)
{
    int i;
    char *buf;

    i = 0;
    while(str[i] != c && str[i])
        i++;
    if (!(buf = malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while(str[i] != c && str[i])
    {
        buf[i] = str[i];
        i++;
    }
    buf[i] = '\0';
    return (buf);
}

int malloc_all(const char *s, char c)
{
    int count;

    count = 0;
    while(*s)
    {
        while(*s == c && *s)
            s++;
        if (*s != c)
        {
            count++;
            while(*s != c && *s)
                s++;
        }
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **strs;
    int i;

    i = 0;
    if (!(strs = malloc(sizeof(char*) * (malloc_all(s, c) + 1))))
        return (NULL);
    while(*s)
    {
        while(*s == c && *s)
            s++;
        if (*s != c && *s)
        {
            strs[i++] = malloc_a_case(s, c);
            while(*s != c && *s)
                s++;
        }
    }
    strs[i] = NULL;
    return (strs);
}