/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:57:10 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 19:58:26 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	buffer[len];

	if (!dst && !src)
		return (dst);
	ft_memcpy(buffer, src, len);
	ft_memcpy(dst, buffer, len);
	return (dst);
}
