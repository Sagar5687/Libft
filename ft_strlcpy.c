/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:27:42 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 17:27:43 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	int	len;
	char	*temp;

	len = ft_strlen(src);
	
	if (size == 0)
		return (len);
	i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return (len);
}
