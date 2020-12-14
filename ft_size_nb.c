/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:16:03 by alafranc          #+#    #+#             */
/*   Updated: 2020/12/14 11:16:35 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size_nb(long nb, int base)
{
	int count;

	count = 1;
	while (nb >= base)
	{
		nb /= base;
		count++;
	}
	return (count);
}
