/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:51:16 by sturuvek          #+#    #+#             */
/*   Updated: 2026/04/29 17:52:29 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *src, int c)
{
	while (*src)
	{
		if (*src == (char)c)
			return ((char *)src);
		src++;
	}
	if (*src == (char)c)
		return ((char *)src);
	return (NULL);
}
