/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/25 13:38:26 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dest;
	size_t			i;

	mem_dest = (unsigned char *)dest;
	mem_src = (unsigned char *)src;
	i = 0;
	if ((uintptr_t)src > (uintptr_t)dest)
	{
		while (i < n)
		{
			mem_dest[i] = mem_src[i];
			i++;
		}
	}
	if ((uintptr_t)src < (uintptr_t)dest)
	{
		while (0 < n)
		{
			mem_dest[n - 1] = mem_src[n - 1];
			n--;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	char move_buf[20] = "123456789";
	ft_memmove(move_buf + 2, move_buf, 5);
	printf("ft_memmove: %s\n", move_buf);
} */