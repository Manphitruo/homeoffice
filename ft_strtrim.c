/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/06 14:58:21 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(int	c);

static int	ft_sets_quant(char const *s1, char const *set)
{
	int		c;
	int		i;
	int		j;

	i = 0;
	c = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
				c++;
		}
		i++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	ptr = malloc(ft_strlen(s1) - ft_sets_quant(s1, set) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
			{
				i++;
				j = 0;
			}
		}
		ptr[k++] = s1[i++];
	}
	ptr[k] = '\0';
	return (ptr);
}
