/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/07 02:16:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		n;
	size_t	i;
	int		j;

	i = 0;
	while (i < size)
	{
		if (dest[i] != '\0')
			i++;
		else
			return (ft_strlen(src) + size);
	}
	n = size - ft_strlen(dest) - 1;
	j = 0;
	if (n < 0)
		return (ft_strlen(src) + size);
	while (j < n && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
