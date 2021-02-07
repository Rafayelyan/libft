#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"
 
int main(void)
{
	char n[40] = "-88888888888888888888888888";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	printf("atoi\t:\t%d\n", i1);
	printf("ft_atoi\t:\t%d\n", i2);
	if (i1 == i2)
		printf("OK\n");
	else
		printf("KO\n");

	return (0);
}
