/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:07:30 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:11:38 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		needle_size;
	char	*res_arr;
	int		c;

	if (ft_strncmp(needle, "", ft_strlen(needle)) == 0 || len == 0)
		return ((char *)haystack);
	needle_size = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		c = 0;
		while (haystack[i] == needle[c] && needle[c] != '\0' && i < len)
		{
			++i;
			++c;
		}
		if (c == needle_size)
		{
			return ((char*)haystack + (i - c));
		}
		++i;
	}
	return (0);
}
