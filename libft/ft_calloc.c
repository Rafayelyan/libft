/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 20:28:35 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 20:30:58 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	void	*result;

	if (!(result = malloc(count * size)))
		return (NULL);
	return (ft_memset(result, 0, count * size));
}
