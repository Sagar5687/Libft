#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	print_result_str(char *name, char *ft, char *og)
{
	printf("%s\n", name);
	printf("ft : %s\n", ft);
	printf("og : %s\n\n", og);
}

void	print_result_int(char *name, int ft, int og)
{
	printf("%s\n", name);
	printf("ft : %d\n", ft);
	printf("og : %d\n\n", og);
}

void	print_result_size(char *name, size_t ft, size_t og)
{
	printf("%s\n", name);
	printf("ft : %zu\n", ft);
	printf("og : %zu\n\n", og);
}

void	print_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		printf("[%d] = %s\n", i, arr[i]);
		i++;
	}
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	del_content(void *content)
{
	free(content);
}

void	*dup_content(void *content)
{
	return (ft_strdup((char *)content));
}

void	upper_content(void *content)
{
	int		i;
	char	*str;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int	main(void)
{
	char	buffer1[50];
	char	buffer2[50];
	char	*ft_str;
	char	*og_str;
	char	**split;

	t_list	*lst;
	t_list	*mapped;

	printf("========== IS FUNCTIONS ==========\n");

	print_result_int("isalpha",
		ft_isalpha('A'),
		isalpha('A'));

	print_result_int("isdigit",
		ft_isdigit('5'),
		isdigit('5'));

	print_result_int("isalnum",
		ft_isalnum('a'),
		isalnum('a'));

	print_result_int("isascii",
		ft_isascii(127),
		isascii(127));

	print_result_int("isprint",
		ft_isprint(' '),
		isprint(' '));

	printf("========== TO FUNCTIONS ==========\n");

	print_result_int("toupper",
		ft_toupper('a'),
		toupper('a'));

	print_result_int("tolower",
		ft_tolower('Z'),
		tolower('Z'));

	printf("========== STRLEN ==========\n");

	print_result_size("strlen",
		ft_strlen("Hello"),
		strlen("Hello"));

	printf("========== STRCHR ==========\n");

	print_result_str("strchr",
		ft_strchr("Hello", 'l'),
		strchr("Hello", 'l'));

	printf("========== STRRCHR ==========\n");

	print_result_str("strrchr",
		ft_strrchr("Hello", 'l'),
		strrchr("Hello", 'l'));

	printf("========== STRNCMP ==========\n");

	print_result_int("strncmp",
		ft_strncmp("abc", "abd", 3),
		strncmp("abc", "abd", 3));

	printf("========== MEMSET ==========\n");

	strcpy(buffer1, "Hello World");
	strcpy(buffer2, "Hello World");

	ft_memset(buffer1, '*', 5);
	memset(buffer2, '*', 5);

	print_result_str("memset", buffer1, buffer2);

	printf("========== MEMCPY ==========\n");

	ft_memcpy(buffer1, "abcdef", 7);
	memcpy(buffer2, "abcdef", 7);

	print_result_str("memcpy", buffer1, buffer2);

	printf("========== MEMMOVE ==========\n");

	strcpy(buffer1, "123456789");
	strcpy(buffer2, "123456789");

	ft_memmove(buffer1 + 2, buffer1, 5);
	memmove(buffer2 + 2, buffer2, 5);

	print_result_str("memmove", buffer1, buffer2);

	printf("========== MEMCHR ==========\n");

	print_result_str("memchr",
		(char *)ft_memchr("abcdef", 'd', 6),
		(char *)memchr("abcdef", 'd', 6));

	printf("========== MEMCMP ==========\n");

	print_result_int("memcmp",
		ft_memcmp("abc", "abd", 3),
		memcmp("abc", "abd", 3));

	printf("========== STRLCPY ==========\n");

	ft_strlcpy(buffer1, "Hello", sizeof(buffer1));
	strlcpy(buffer2, "Hello", sizeof(buffer2));

	print_result_str("strlcpy", buffer1, buffer2);

	printf("========== STRLCAT ==========\n");

	strcpy(buffer1, "Hello ");
	strcpy(buffer2, "Hello ");

	ft_strlcat(buffer1, "World", sizeof(buffer1));
	strlcat(buffer2, "World", sizeof(buffer2));

	print_result_str("strlcat", buffer1, buffer2);

	printf("========== STRDUP ==========\n");

	ft_str = ft_strdup("Libft");
	og_str = strdup("Libft");

	print_result_str("strdup", ft_str, og_str);

	free(ft_str);
	free(og_str);

	printf("========== ATOI ==========\n");

	print_result_int("atoi",
		ft_atoi("-42"),
		atoi("-42"));

	printf("========== SUBSTR ==========\n");

	ft_str = ft_substr("Hello World", 6, 5);

	printf("ft : %s\n", ft_str);
	printf("og : World\n\n");

	free(ft_str);

	printf("========== STRJOIN ==========\n");

	ft_str = ft_strjoin("Hello ", "World");

	printf("ft : %s\n", ft_str);
	printf("og : Hello World\n\n");

	free(ft_str);

	printf("========== STRTRIM ==========\n");

	ft_str = ft_strtrim("+++Hello+++", "+");

	printf("ft : %s\n", ft_str);
	printf("og : Hello\n\n");

	free(ft_str);

	printf("========== SPLIT ==========\n");

	split = ft_split("Hello world 42 school", ' ');

	print_split(split);

	free_split(split);

	printf("\n========== ITOA ==========\n");

	ft_str = ft_itoa(-12345);

	printf("ft : %s\n", ft_str);
	printf("og : -12345\n\n");

	free(ft_str);

	printf("========== CALLOC ==========\n");

	int *ft_arr = ft_calloc(5, sizeof(int));
	int *og_arr = calloc(5, sizeof(int));

	printf("ft : ");
	for (int i = 0; i < 5; i++)
		printf("%d ", ft_arr[i]);

	printf("\nog : ");
	for (int i = 0; i < 5; i++)
		printf("%d ", og_arr[i]);

	printf("\n\n");

	free(ft_arr);
	free(og_arr);

	printf("========== LIST FUNCTIONS ==========\n");

	lst = ft_lstnew(ft_strdup("one"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("three")));

	printf("Initial list:\n");
	print_list(lst);

	printf("lstsize = %d\n\n", ft_lstsize(lst));

	printf("Applying lstiter uppercase:\n");
	ft_lstiter(lst, upper_content);
	print_list(lst);

	printf("\nTesting lstmap:\n");

	mapped = ft_lstmap(lst, dup_content, del_content);
	print_list(mapped);

	ft_lstclear(&lst, del_content);
	ft_lstclear(&mapped, del_content);

	return (0);
}
