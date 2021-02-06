#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static	int	get_num_length(long num)
{
	int	counter;

	counter = 0;

	if(num <= 0)
	{
		++counter;
		num = num * (-1);
	}

	while (num != 0)
	{
		num = num / 10;
		++counter;
	}

	return (counter);
}

static int ft_pow(int num, int deg)
{
	int index;
	int res = num;

	index = 1;
	while (index < deg)
	{
		res = num * res;
		++index;
	}
	return  (res);
}

static	void	convert(char *number, long	*num, int *num_len)
{
	int index;

	index = 0;
	if (*num < 0)
	{
		number[index] = '-';
		*num = *num * (-1);
		++index;
		--*num_len;
	}
	while (*num_len > 0)
	{
	  	number[index] = '0' + *num / ft_pow(10, *num_len - 1);
		*num = *num - ((number[index] - '0')*ft_pow(10, *num_len - 1));
		++index;
		--*num_len;
	}
	number[index - 1] = '0' + *num % 10;
	number[index] = '\0';
}

char	*ft_itoa(int n)
{
	long	num;
	int		num_len;
	char	*number;

	num = n;
	num_len = get_num_length(num);
	if(!(number = (char*)malloc(sizeof(char) * (num_len + 1))))
		return (NULL);

	convert(number, &num, &num_len);

	return (number);
}
