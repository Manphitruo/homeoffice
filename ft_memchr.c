/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/15 20:57:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;
	void			*ptr;
	size_t			i;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		ptr = &mem[i];
		if (mem[i] == (unsigned char)c)
			return (ptr);
		i++;
	}
	return (NULL);
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
	printf("ft_memchr(\"abcdef\", 'd', 6): %s\n",
		(char *)ft_memchr("abcdef", 'd', 6));
} */