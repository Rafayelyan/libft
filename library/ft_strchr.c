char	*ft_strchr(const char *s, int c)
{
	int 		i;
	char		*arr;

	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] == (char)c)
		{
			return ((char*)s + i);
		}
		++i;
	}
	return (0);
}
