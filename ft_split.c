#include "libft.h"

static int	number_words(char const *s, char c)
{
	int	nw;

	nw = 0;

	while (*s)
	{
		while (*s == c)
			s++;

		if (*s)
			nw++;

		while (*s && *s != c)
			s++;
	}
	return (nw);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	nw;
	int	i;
	int	len;
	int word;
	
	nw = number_words(s, c);
	res = malloc(sizeof(char *) * (nw + 1));
	len = 0;
	i = 0;
	word = 0;
	while(*s)
	{
		while(s[len] != c && s[len] != '\0')
		{
			len++;
		}
		res[word] = malloc(sizeof(char) * (len + 1));
		while(i < len)
		{
			res[word][i] = s[i];
			i++;
		}
		res[word][i] = '\0';
		s += len;
		len = 0;
		word++;
		i = 0;
	}
	res[word] = NULL;
	return (res);
}
