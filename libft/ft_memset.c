/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:27:21 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 19:40:48 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		i;
	char	ch_c;
	char	*arr;

	i = 0;
	ch_c = (char)c;
	arr = (char*)str;
	while (i < n)
	{
		arr[i] = ch_c;
		++i;
	}
	return (arr);
}
