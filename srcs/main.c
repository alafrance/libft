/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:05:15 by alexis            #+#    #+#             */
/*   Updated: 2020/11/04 18:10:58 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

char change_to_s(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ('c');
    else
        return (c);
}

int main(int ac, char **av)
{
    char dest[] = "coucou les amis";
    char src[] = "salut les amis";
    //unsigned char *str = (unsigned char*)memccpy((unsigned char*)dest, (unsigned char*)src, ';', ft_strlen(src));
    unsigned char *str = (unsigned char*)ft_memccpy((unsigned char*)dest,(unsigned char*)src, ';', ft_strlen(src));
    printf("str: %s\ndest1: %s\nsrc: %s\n", str, dest, src);
}