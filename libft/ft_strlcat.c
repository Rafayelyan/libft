/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:04:41 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:05:33 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		index;
	int		counter;

	index = 0;
	counter = 0;
	while (dst[index] && index < dstsize)
	{
		++index;
	}
	while (dstsize > counter + index + 1 && src[counter] != '\0')
	{
		dst[index + counter] = src[counter];
		++counter;
	}
	if (index < dstsize)
	{
		dst[index + counter] = '\0';
	}
	return (index + ft_strlen(src));
}
