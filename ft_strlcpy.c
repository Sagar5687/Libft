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
	int	len;
	char	*temp;

	len = 0;
	temp = src;
	while(*src)
	{
		len++;
		src++;
	}
	if(*src)
		return (len);
	while(size > 0)
	{
		*dest = *temp;
		dest++;
		temp++;
	}
	return (len);
}		
