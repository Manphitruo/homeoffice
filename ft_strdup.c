/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/10/30 19:07:20 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(int	c);

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	dest = malloc(len);
	while (s[i])
		dest[i] = s[i++];
	return (dest);
}
