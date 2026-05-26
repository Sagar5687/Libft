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
	long	nb;
	char	c;

	if (fd < 0)
		return ;

	nb = n;

	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}

	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);

	c = (nb % 10) + '0';
	write(fd, &c, 1);
}
