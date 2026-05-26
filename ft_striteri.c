/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:22:06 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/21 16:28:18 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	int	len;

	while (!s || !f)
		return ;
	len = ft_strlen((const char *)s);
	i = 0;
	while (i < (unsigned int)len)
	{
		f(i, &s[i]);
		i++;
	}
}
