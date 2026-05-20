/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:27:36 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 17:27:38 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	n;

	slen = len(src);
	dlen = len(dest);
	dest += dlen;
	if (size <= dlen)
		return (slen + size);
	n = size - dlen -1;
	while (n > 0 && *src)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (slen + dlen);
}
