/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:50:59 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/26 18:05:22 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substring_check(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n > 0)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (*s1 == '\0');
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	if (! *to_find)
		return ((char *)str);
	while (n > 0 && *str)
	{
		if (*str == *to_find)
		{
			if (substring_check(to_find, str, n))
				return ((char *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}
