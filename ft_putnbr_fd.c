#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*temp;

	temp = ft_itoa(n);
	if(!temp)
		return ;
	write(fd, temp, ft_strlen(temp));
	free(temp);
}
