#include <stdio.h>

int 	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, /*size_t*/unsigned int n);
void	ft_bzero(void *s, int n);
void 	*ft_memcpy(void *restrict dst, const void *restrict src, int n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, int n);
void 	*ft_memmove(void *dst, const void *src, int len);
void	*ft_memchr(const void *s, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, int n);
int		ft_strlcpy(char * restrict dst, const char * restrict src, int dstsize);
int		ft_strlcat(char * restrict dst, const char * restrict src, int dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len);
int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_calloc(int count, int size);
char	*ft_strdup(const char *s1);

/*		Additional functions	*/

char	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s1, char const *set);
char 	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void 	ft_putendl_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
