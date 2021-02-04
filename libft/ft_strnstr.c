#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
		while (haystack[i] == needle[counter] && needle[counter] != '\0' && i < len)
		{
			++i;
			++counter;
		}
		if(counter == needle_size)
		{
			return ((char*)haystack + (i - counter));
		}
		++i;
	}
	return (0);
}
