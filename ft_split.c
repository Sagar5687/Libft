/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:51:17 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/21 16:51:19 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static void word_extractor(char *s, char c, char **res, int word)
{
    int i;
    int len;

    while (*s)
    {
        while (*s++ == c)
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
            res[word++][i] = '\0';
            s += len;
        }
    }
    res[word] = NULL;
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     nw;
    int     word;

    nw = number_words(s, c);
    res = malloc(sizeof(char *) * (nw + 1));
    if (!res)
        return (NULL);
    word = 0;
    word_extractor(s, c, res, word);
    return (res);
}
