/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 14:54:47 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/25 13:07:29 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (('\t' <= c && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *ptr)
{
	long int	n;
	size_t		i;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ft_isspace(ptr[i]))
		i++;
	if (ptr[i] == '+')
		i++;
	else if (ptr[i] == '-')
	{
		i++;
		sign = -1;
	}
	while (ft_isdigit(ptr[i]))
	{
		n *= 10;
		n += (ptr[i] - '0');
		i++;
	}
	return (n * sign);
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
	const char *num_str = "-2147483648";
	printf("ft_atoi(\"%s\"): %d\n", num_str, ft_atoi(num_str));
} */
