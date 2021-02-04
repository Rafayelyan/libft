#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int index;
    int s_len;

    index = 0;
    s_len = ft_strlen(s);

    while (index < s_len)
    {
        ft_putchar_fd(s[index], fd);
        ++index;
    }
}
