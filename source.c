#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"
 
int main(void)
{
	char *str = "";
	size_t size = 0;

	char *ret = ft_substr(str, 5, size);

	printf("ret : %s", ret);

	printf("%d\n", strncmp(ret, str + 5, size));


    return 0;
}
