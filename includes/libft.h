#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int     ft_atoi(const char *nptr);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t count, size_t size);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
char    *ft_strrev(char *str);
char    *ft_itoa(int n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);



void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char    **ft_split(char const *s, char c);
char    *ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
char    *ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t size);
size_t	ft_strlcpy(char * restrict dest, const char * restrict src, size_t size);
size_t  ft_strlen(const char *s);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_tolower(int c);
int     ft_toupper(int c);
#endif
