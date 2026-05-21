#include "libft.h"

static int  number_words(char const *s, char c)
{
    int nw;

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

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     nw;
    int     len;
    int     i;
    int     word;

    nw = number_words(s, c);
    res = malloc(sizeof(char *) * (nw + 1));
    if (!res)
        return (NULL);

    word = 0;
    while (*s)
    {
        while (*s == c)
            s++;

        len = 0;
        while (s[len] && s[len] != c)
            len++;

        if (len > 0)
        {
            res[word] = malloc(sizeof(char) * (len + 1));
            if (!res[word])
                return (NULL);

            i = 0;
            while (i < len)
            {
                res[word][i] = s[i];
                i++;
            }
            res[word][i] = '\0';

            word++;
            s += len;
        }
    }
    res[word] = NULL;
    return (res);
}