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
