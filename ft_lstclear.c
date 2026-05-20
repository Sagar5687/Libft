/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:06:37 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/20 19:21:16 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;
	t_list	*prev;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		del(temp->content);
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	*lst = NULL;
}
