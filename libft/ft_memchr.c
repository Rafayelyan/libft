void	*ft_memchr(const void *s, int c, int n)
{
	int 		i;
	const char*	str;

	i = 0;
	str = s;
	while (i < n && str[i] != '\0')
	{
		if(str[i] == (char)c)
		{
			return ((char*)str + i);
		}
		++i;
	}
	return (0);
}

