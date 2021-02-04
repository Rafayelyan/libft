int		ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	int						i;
	unsigned const char*	str1;
	unsigned const char*	str2;
	
	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if(str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		++i;
	}
	return (0);
}

