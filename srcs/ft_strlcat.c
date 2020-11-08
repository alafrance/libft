/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvainlafrance <sylvainlafrance@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:03:46 by alexis            #+#    #+#             */
/*   Updated: 2020/11/04 15:09:28 by sylvainlafr      ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] && i < dstsize)
		i++;
	while (src[k])
		k++;
	if (dstsize == 0)
		return (i + k);
	while (src[j] && i + j < dstsize - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if ((i + j) != dstsize)
		dest[i + j] = '\0';
	return (i + k);
}