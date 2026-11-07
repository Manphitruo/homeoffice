/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/07 01:56:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	mem_dest = (unsigned char *)dest;
	mem_src = (unsigned char *)src;
	i = 0;
	if (src > dest)
	{
		
		while (i < n)
		{
			mem_dest[i] = mem_src[i];
			i++;
		}
	}
	if (src < dest)
	{
		while (0 < n)
		{
			mem_dest[n-1] = mem_src[n-1];
			n--;
		}
	}
	return (dest);
}
