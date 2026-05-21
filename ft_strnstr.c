/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:50:59 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 15:58:18 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substring_check(const char *temp1, const char *temp2, size_t n)
{
	while (*temp1 && n > 0)
	{
		if (*temp1 != *temp2)
			return (0);
		temp1++;
		temp2++;
		n--;
	}
	return (*temp1 == '\0');
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	l;

	l = n;
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
