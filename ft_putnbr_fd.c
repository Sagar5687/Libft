/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:51:06 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/21 16:51:09 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if(fd < 0)
		return ;
	char	*temp;

	temp = ft_itoa(n);
	if(!temp)
		return ;
	write(fd, temp, ft_strlen(temp));
	free(temp);
}
