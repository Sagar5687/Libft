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

char	*ft_itoa(int n)
{
	char	*res;
	int	len;
	int	x;
	int	flag;
	int	i;
	
	i = 0;
	x = n;
	len = 0;
	flag = 0;
	if(x < 0)
	{
		flag = 1;
		x *= -1;
		n *= -1;
	}
	if(x == 0)
		len = 1;
	else
	{
		while(x > 0)
		{
			len++;
			x /= 10;
		}
	}
	res = malloc(sizeof(char) * (len + flag + 1));
	if(!res)
		return (NULL);
	if(n == 0)
		res[i++] = '0';
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
	return (res);
}

#include <stdio.h>
int main()
{
	char	*ewa = ft_itoa(-2147483648);
	printf("%s \n",ewa);
}
