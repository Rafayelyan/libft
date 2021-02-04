#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "library/libft.h"
 
int main(void)
{
	printf("my res\t\t:\t%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("oroginal res\t:\t%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));

    return 0;
}
