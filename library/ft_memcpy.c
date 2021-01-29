void *ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
	int			i;
	char		*dest;
	const char 	*source;

	i = 0;
	dest = dst;
	source = src;

	while (i < n)
	{
		dest[i] = source[i];
		++i;
	}

	//ft_bzero(dest, n);
	dest[n] = '\n';
	return (dest);
}
