#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	void *result = malloc(count * size);
	return (ft_memset(result, 0, count * size));
}
