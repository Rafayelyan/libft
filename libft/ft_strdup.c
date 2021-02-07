/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:31:10 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:33:49 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*s1_copy;
	int		i;

	length = ft_strlen(s1);
	if (!(s1_copy = (char*)malloc((length + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < length)
	{
		s1_copy[i] = s1[i];
		++i;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
