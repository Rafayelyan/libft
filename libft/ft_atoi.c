/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:14:03 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:16:12 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_whitespace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

static int		is_negative(const char *str, int *counter)
{
	if (str[*counter] == '-')
	{
		++*counter;
		return (-1);
	}
	else if (str[*counter] == '+')
	{
		++*counter;
	}
	return (1);
}

int				ft_atoi(const char *str)
{
	int	number;
	int	counter;
	int	minus;

	counter = 0;
	number = 0;
	while (is_whitespace(str[counter]))
		++counter;
	minus = is_negative(str, &counter);
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		number = number * 10;
		number = number + (str[counter] - '0');
		++counter;
	}
	return (number * minus);
}
