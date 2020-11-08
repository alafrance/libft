/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:15:37 by sylvainlafr       #+#    #+#             */
/*   Updated: 2020/11/08 17:15:39 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_int(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void	ft_swap_char(char **ptr1, char **ptr2)
{
    char *tmp;

    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}