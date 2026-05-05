/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:19:46 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 16:25:58 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     stlen(char *src)
{
    int     i;

    i = 0;
    while (*src != '\0')
    {
        i++;
        src++;
    }
    return (i);
}

static char    *stcpy(char *src, char *dest)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}

char    *ft_strdup(char *src)
{
    char    *str;

    str = (char *)malloc(sizeof(char) * (stlen(src) + 1));
    stcpy(src, str);
    return str;
}
