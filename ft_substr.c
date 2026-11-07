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
	char	*sub;
	size_t	i;

	i = 0;
	if (len < 1 || start > (unsigned int)ft_strlen(s))
		return (NULL);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (s[start] && len > i)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}