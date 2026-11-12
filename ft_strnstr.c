/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/11 22:29:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char const	*ptr;
	size_t		i;
	int			j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while (i < len && big[i])
	{
		ptr = &big[i];
		while (big[i] == little[j])
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)ptr);
		i++;
	}
	return (NULL);
}
