/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:45:04 by sturuvek          #+#    #+#             */
/*   Updated: 2026/04/29 17:39:33 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*xdest;
	unsigned char	*xsrc;

	xdest = dest;
	xsrc = src;
	while (n > 0)
	{
		*xdest = *xsrc;
		xdest++;
		xsrc++;
	}
	return (dest);
}
