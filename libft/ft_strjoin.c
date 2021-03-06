/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:39:56 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:40:30 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		counter;
	char	*s;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	counter = 0;
	if(!(s = (char* )malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (NULL);

	while (s1[counter] != '\0')
	{
		s[counter] = s1[counter];
		++counter;
	}
	while (s2[counter - s1_len] != '\0')
	{
		s[counter] = s2[counter - s1_len];
		++counter;
	}
	s[counter] = '\0';

	return (s);
}
