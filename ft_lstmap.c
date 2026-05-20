/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturuvek <sturuvek@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 17:29:59 by sturuvek          #+#    #+#             */
/*   Updated: 2026/05/20 17:30:02 by sturuvek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
    t_list  *newlist;
    t_list  *node;

    newlist = NULL;
    while(lst)
    {
        node = ft_lstnew(f(lst->content));
        if(!node)
        {
            ft_lstclear(&newlist,del);
            return (NULL);
        }
        ft_lstadd_back(&newlist,node);
        lst = lst->next;
    }
    return (newlist);
}
