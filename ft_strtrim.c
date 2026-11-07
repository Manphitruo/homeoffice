/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/07 02:23:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_sets_quant(char const *s1, char const *set)
{
	int		c;
	int		i;

	i = 0;
	c = 0;
	while (ft_strchr(set,s1[i]))
	{
		c++;
		i++;
	}
	while (s1[i])
		i++;
	while (ft_strchr(set,s1[i]))
	{
		c++;
		i--;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = malloc(ft_strlen(s1) - ft_sets_quant(s1, set) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_strchr(set,s1[i]))
		i++;
	while (s1[i])
		ptr[j++] = s1[i++];
	ptr[j] = '\0';
	return (ptr);
}
