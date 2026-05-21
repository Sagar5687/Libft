/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:34:28 by sturuvek          #+#    #+#             */
/*   Updated: 2026/04/28 15:36:46 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*ptd;

	ptd = (unsigned char *)ptr;
	while (n > 0)
	{
		*ptd = (unsigned char)x;
		ptd++;
		n--;
	}
	return (ptr);
}
