/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:19:46 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/20 19:02:35 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	stlen(const char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

static void	stcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*ft_strdup(const char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (stlen(src) + 1));
	if (!str)
		return (NULL);
	stcpy(str, src);
	return (str);
}