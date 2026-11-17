/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/15 20:51:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		ptr = ft_lstnew(content);
		if (!ptr)
		{
			ft_lstclear(&head, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&head, ptr);
		lst = lst->next;
	}
	return (head);
}

/* #include <stdio.h>
#include <unistd.h>

static void	del(void *content)
{
	free(content);
}

static void	iter(void *content)
{
	printf("%s \n", (char *)content);
}

static void	*map(void *content)
{
	int	i;

	i = 0;
	char *str = ft_strdup((char *)content);
	if (!str)
		return (NULL);
	for (str[i])
	{
		str[i] = (char)ft_toupper(str[i]);
		i++;
	}
	return (str);
}

int	main()
{
	t_list *head = ft_lstnew(strdup("head"));
	t_list *node2 = ft_lstnew(strdup("node_2"));
	t_list *node3 = ft_lstnew(strdup("node_3"));

	ft_lstadd_front(&node_2, head);
	ft_lstadd_back(&head, node3);

	printf("ft_lstsize: %d\n", ft_lstsize(head));
	printf("ft_lstlast: %s\n", (char *)(ft_lstlast(head)->content));

	t_list *mapped_list = ft_lstmap(head, map, del);
	printf("ft_lstmap contents: ");
	ft_lstiter(mapped_list, iter);

	ft_lstclear(&mapped_list, del_content);
	t_list *temp_node = ft_lstnew(strdup("Single Node"));
	ft_lstdelone(temp_node, del);
	ft_lstclear(&head, del_content);
}
 */