#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int ft_atoi(const char *s);
void	ft_bzero(void *ptr, size_t n);
void	*ft_calloc(size_t nmeb, size_t size);
int	ft_isalnum(int n);
int	ft_isalpha(int n);
int	ft_isascii(int n);
int	ft_isdigit(int n);
int	ft_isprint(int n);
void	*memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void*	ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *src, const void *dest, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
char	*ft_stchr(char *src, int n);
char    *ft_strdup(char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int	ft_strlen(char *c);
int	ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strrchr(char *src, int n);
int	ft_tolower(int n);
int	ft_toupper(int n);
#endif