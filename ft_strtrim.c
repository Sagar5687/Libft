/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:54:45 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 20:57:04 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
    size_t	start;
    size_t	end;
    char	*trimmed;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    trimmed = (char *)malloc(end - start + 1);
    if (!trimmed)
        return (NULL);
    ft_strlcpy(trimmed, s1 + start, end - start + 1);
    return (trimmed);
}