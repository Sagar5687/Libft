/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:34:13 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/26 18:35:40 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmeb > SIZE_MAX / size)
		return (NULL);
	ptr = (unsigned char *)malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmeb * size));
	return (ptr);
}
