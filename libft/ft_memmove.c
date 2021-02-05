#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (dst);
	
	char	buffer[len];
    
	ft_memcpy(buffer, src, len);
	ft_memcpy(dst, buffer, len);

	return (dst);
}
