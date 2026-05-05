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
	while(n > 0)
	{
		*dest = *temp;
		dest++;
		temp++;
	}
	return (len);
}		
