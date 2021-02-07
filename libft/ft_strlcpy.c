/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:03:04 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:03:37 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i + 1 < dstsize))
	{
		dst[i] = src[i];
		++i;
	}
	if (dstsize)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
