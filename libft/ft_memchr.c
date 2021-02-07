/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:58:51 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:00:45 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	int				i;
	const char		*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return ((char*)str + i);
		}
		++i;
	}
	return (0);
}
