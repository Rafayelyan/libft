/* realizaciayov nuyn banna inch vor ft_memcmp funcian
 * (stugel hamozvelu hamar)
 * */
int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] - s2[i] != 0)
		{
			return (s1[i] - s2[i]);
		}
		++i;
	}
	return (0);


}
