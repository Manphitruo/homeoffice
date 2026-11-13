/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/13 12:06:54 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_sets_quant(char const *s1, char const set)
{
	int		c;
	int		i;

	i = 0;
	c = 0;
	while (s1[i])
	{
		if ((s1[i] != set && i != 0 && s1[i - 1] == set) || (s1[i] != set && i == 0))
			c++;
		i++;
	}
	return (c);
}

static int	ft_chr_quant(char const *s, char const set)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == set)
			return (i);
		i++;
	}
	return (i);
}

static char	**ft_free_all(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return(NULL);
}

static int	ft_inner(char const **s, char **ptr, int i, int j)
{
	ptr[i][j++] = **s;
	(*s)++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;

	i = 0;
	ptr = malloc((ft_sets_quant(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (*s != '\0')
	{
		j = 0;
		ptr[i] = malloc(ft_chr_quant(s, c) + 1);
		if (!ptr[i])
			return (ft_free_all(ptr, i));
		while (s != ft_strchr(s, c) && *s != '\0')
			j = ft_inner(&s, ptr, i, j);
		if (*s != '\0')
			s++;
		ptr[i][j] = '\0';
		i++;
	}
	ptr[i] = "\0";
	return (ptr);
}
