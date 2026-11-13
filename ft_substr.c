/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 22:11:44 by marvin            #+#    #+#             */
/*   Updated: 2026/11/03 22:11:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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
