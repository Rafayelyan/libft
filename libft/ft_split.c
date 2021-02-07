/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhacha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 21:15:15 by rakhacha          #+#    #+#             */
/*   Updated: 2021/02/07 21:55:25 by rakhacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_words_count(const char *s, char c)
{
	int		i;
	int		count;
	char	*str;

	count = 0;
	i = 0;
	str = ft_strtrim(s, &c);
	if (!str)
	{
		return (0);
	}
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			++count;
		++i;
	}
	return (++count);
}

static char	**to_free(char **words)
{
	int	index;

	index = 0;
	while (words[index])
	{
		free(words[index]);
		++index;
	}
	free(words);
	return (NULL);
}

static char	**get_words(const char *s, char c, int words_count)
{
	char	*str;
	int		i;
	int		index;
	int		start;
	int		iterator;
	int		*words_lengths;
	char	**words;
	if (!(words_lengths = (int*)ft_calloc(words_count, sizeof(int))))
		return (NULL);
	if (!(words = (char**)malloc((words_count + 1) * sizeof(char*))))
		return (NULL);

	str = ft_strtrim(s, &c);
	i = 0;
	iterator = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			start = i;
			while (str[i] != c && str[i] != '\0')
			{
				++words_lengths[iterator];
				++i;
			}
			index = 0;
			if (!(words[iterator] = (char*)malloc(sizeof(char) * (words_lengths[iterator] + 1))))
				return (to_free(words));
			i = start;
			while (str[i] != c && str[i] != '\0')
			{
				words[iterator][index] = str[i];
				++i;
				++index;
			}
			words[iterator][index] = '\0';
			++iterator;
		}
		else
			++i;
	}
	words[iterator] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		words_count;
	int		*words_lengths;
	char	**words;

	words_count = get_words_count(s, c);
	words = get_words(s, c, words_count);
	return (words);
}
