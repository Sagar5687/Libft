/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:52:36 by sturuvek          #+#    #+#             */
/*   Updated: 2026/04/29 17:54:39 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int n)
{
	char	*x;
	x = NULL;

	while (*src)
	{
		if (*src == (char)n)
		{
			x = (char *)src;
		}
		src++;
	}
	if((char)n == '\0')
		return ((char *)src);
	return (x);
}
