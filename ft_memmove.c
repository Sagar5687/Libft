/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:39:44 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/20 18:51:45 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*xsrc;
	unsigned char	*xdest;

	if(!dest && !src)
		return (NULL);
	xsrc = (const unsigned char *)src;
	xdest = (unsigned char *)dest;
	if (xdest > xsrc)
	{
		while (n--)
		{
			xdest[n] = xsrc[n];
		}
	}
	else
	{
		while (n--)
		{
			*xdest++ = *xsrc++;
		}
	}
	return (dest);
}