/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:27:55 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 17:27:57 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if ((unsigned char)s1[i] != (unsigned char)s2[i])
            return ((unsigned char)s1[i]
                - (unsigned char)s2[i]);
        if (s1[i] == '\0')
            return (0);
        i++;
    }
    return (0);
}