/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:40:44 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:41:11 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		s1_len;

	start = 0;
	s1_len = ft_strlen(s1);
	end = s1_len - 1;

	while (ft_strchr(set, s1[start]) && s1[start])
	{
		++start;
	}
	while (ft_strchr(set, s1[end]) && end > start)
	{
		--end;
	}
	if(end  - start + 1 <= 0)
		return ("");
	return (ft_substr(s1, start, end - start + 1));
}
