/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/10 11:30:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;

	head = NULL;
	if (lst != NULL)
	{
		head = ft_lstnew(f(lst->content));
		if (!head)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
	}
	while (lst != NULL)
	{
		ptr = ft_lstnew(f(lst->content));
		ft_lstadd_back(&head, ptr);
	}
	return(head);
}
