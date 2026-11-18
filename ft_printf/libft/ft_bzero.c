/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:55:18 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/18 14:55:22 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>

int	main()
{
	char bzero_buf[10] = "abcdefghi";
	ft_bzero(bzero_buf, 4);
	bzero_buf[10] = '\0';
	printf("ft_bzero: %s\n", bzero_buf);
} */
