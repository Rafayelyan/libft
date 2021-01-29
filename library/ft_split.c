#include <stdio.h> 
#include <stdlib.h> 
#include "libft.h"

static	int	Get_words_count(const char *s, char c)
{
	char	*str;
	char	*res;
	int		counter;
	char	*set = (char*)malloc(sizeof(char) * 2);

	str = ft_strdup(s);
	res = (char*)malloc(sizeof(char) * ft_strlen(s));
	set[0] = c;
	set[1] = '\0';
	ft_strlcpy(res, ft_strtrim(ft_strchr(str, c), set), ft_strlen(ft_strtrim(ft_strchr(str, c), set)));
	while (*res)
	{
		char *temp = ft_strchr(res, c);
		if(temp == '\0')
		{
			++counter;
			break;
		}	
		ft_strlcpy(res, ft_strtrim(ft_strchr(res, c), set), ft_strlen(ft_strtrim(ft_strchr(res, c), set)) );
		++counter;
	}
	free(str);
	return (counter);
}

static	int	get_words_count(const char *s, char c)
{
	int		i;
	int		count;
	char	*str;


	count = 0;
	i = 0;
	str = ft_strtrim(s, &c);

	if(!str)
	{
		return (0);
	}
	while(s[i])
	{
		if(s[i] != c && s[i + 1] == c)
			++count;
		++i;
	}
		
	return (++count);
}

static char	**to_free(char	**words)
{
	int	index;

	index = 0;
	while(words[index])
	{
		free(words[index]);
			++index;
	}
	free(words);
	
   return (NULL);
}


static	char	**get_words(const char *s, char c,int words_count)
{
	char	*str;
	int		i;
	int		index;
	int		start;
	int		iterator;
	int		*words_lengths = (int*)ft_calloc(words_count, sizeof(int));
	char	**words;

	if(!(words = (char**)malloc((words_count + 1) * sizeof(char*))))
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
			if(!(words[iterator] = (char*)malloc(sizeof(char) * words_lengths[iterator] + 1)))
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
		{
			++i;
		}
	}
	words[i] = NULL;

	return (words);
}

char **ft_split(char const *s, char c)
{
	int		words_count;
	int		*words_lengths;
	char	**words;

	words_count = get_words_count(s, c);
	words = get_words(s, c, words_count);

	return (words);
}
