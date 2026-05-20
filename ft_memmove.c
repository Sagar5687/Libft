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

void	*ft_memmove(void *src, const void *dest, size_t n)
{
	unsigned char	*temp;
	unsigned char	*xsrc;
	unsigned char	*xdest;
	size_t	i;
	size_t	j;

	temp = malloc(n);
	if (!temp)
		return (NULL);
	xsrc = (unsigned char *)src;
	xdest = (unsigned char *)dest;
	i = 0;
	while (n > 0)
	{
		temp[i] = xsrc[i];
		i++;
		n--;
	}
	j = 0;
	while (j < i)
	{
		temp[j] = xdest[j];
		j++;
	}
	return (dest);
}
