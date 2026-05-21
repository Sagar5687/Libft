#include "libft.h"

static char	*reverse_string(char *res, int len)
{
	char	temp;
	int	i;
	
	i = 0;
	while(i < (len / 2))
	{
		temp = res[i];
		res[i] = res[len - i - 1];
		res[len - i - 1] = temp;
		i++;
	}
	return (res);
}
static int	num_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	else
	{
		while(n > 0)
		{
			len += 1;
			n /= 10;
		}
	}
	return (len);
}

static void	calc_itoa(long n, char *res, int flag, int len)
{
	int	i;

	i = 0;
	while(n > 0)
	{
		res[i] = ((n % 10) + '0');
		n /= 10;
		i++;
	}
	if(flag == 1)
	{
		res[i] = '-';
		i++;
	}
	res = reverse_string(res, len + flag);
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int	len;
	int	flag;
	long	nb;
	
	nb = n;
	len = 0;
	flag = 0;
	if(nb < 0)
	{
		flag = 1;
		nb *= -1;
	}
	len = num_len(nb);
	res = malloc(sizeof(char) * (len + flag + 1));
	if(!res)
		return (NULL);
	if(nb == 0)
	{
		res[0] = '0';
		res[1] = '\0';
	}
	calc_itoa(nb, res, flag, len);
	return (res);
}
