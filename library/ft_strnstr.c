#include "libft.h"
#include <stdio.h>
/*	funciayi normal bacatrutyun chem gtel
 *	stexi implementacian 	strstr	funciayi inplementa im koxmic (bayc chem stugel)
 * */
char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int		i;
	int		needle_size;
	char	*res_arr;

	needle_size = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		int counter;
		counter = 0;
		while (haystack[i] == needle[counter] && needle[counter] != '\0')
		{
			++counter;
		}
		if(counter == needle_size)
		{
			return ((char*)haystack + i);
		}
		++i;
	}
	return (0);
}
