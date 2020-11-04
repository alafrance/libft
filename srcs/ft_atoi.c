/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:12:36 by alexis            #+#    #+#             */
/*   Updated: 2020/11/03 18:24:14 by alexis           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int nb;
    int sign;
    int i;

    i = 0;
    nb = 0;
    sign = 1;
    while (nptr[i] == ' ' || nptr[i] >= 9 && nptr[i] <= 13)
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        nb = nb * 10 + nptr[i] - '0';
        i++;
    }
    return (nb * sign);
}