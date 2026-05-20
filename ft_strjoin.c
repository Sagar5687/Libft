/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:49:22 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/05 20:52:22 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int	lens1;
	int	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (lens1 + lens2 + 1));
	while (*s1)
	{
		*res = *s1;
		s1++;
		res++;
	}
	while (*s2)
	{
		*res = *s2;
		s2++;
		res++;
	}
	*res = '\0';
	return (res);
}
