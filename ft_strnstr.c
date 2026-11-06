/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/06 11:52:00 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	if (little == "")
		return (big);
	while (i < len && big[i])
	{
		ptr = &big[i];
		while (big[i] == little[j])
		{
			i++;
			j++;
		}
		if (!little[j])
			return (ptr);
		i++;
	}
	return (NULL);
}
