/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/18 15:41:21 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sets_quant(char const *s1, char const set)
{
	int		c;
	int		i;

	i = 0;
	c = 0;
	while (s1[i])
	{
		if ((s1[i] != set && i != 0 && s1[i - 1] == set)
			|| (s1[i] != set && i == 0))
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
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	ptr = malloc((ft_sets_quant(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s == ft_strchr(s, c) && *s != '\0')
		s++;
	while (*s != '\0')
	{
		ptr[i] = ft_substr(s, 0, ft_chr_quant(s, c));
		if (!ptr[i])
			return (ft_free_all(ptr, i));
		s += ft_chr_quant(s, c);
		while (s == ft_strchr(s, c) && *s != '\0')
			s++;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

/* #include <stdio.h>

int	main()
{
	printf("ft_split(\"read,write,execute\", ','):\n");
	char **split = ft_split("read,write,execute", ',');
	if (split)
	{
		for (int i = 0; split[i] != NULL; i++)
		{
				printf("  [%d]: %s\n", i, split[i]);
		free(split[i]);
		}
		free(split);
	}
} */
