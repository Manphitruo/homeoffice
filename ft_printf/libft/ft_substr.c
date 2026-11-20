/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:43:19 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/18 15:43:19 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len < 1 || (size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	size = (ft_strlen(s) - (size_t)start);
	sub = malloc(size + 1);
	if (!sub)
		return (NULL);
	while (s[start] && len > i)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	char *sub = ft_substr("Hello World", 6, 5);
	printf("ft_substr: %s\n", sub);
	free(sub);
} */