/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/10/30 18:36:20 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	*mem;
	void			*ptr;
	int				i;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		ptr = &mem[i];
		if (mem[i] == c)
			return (ptr);
		i++;
	}
	return (NULL);
}
