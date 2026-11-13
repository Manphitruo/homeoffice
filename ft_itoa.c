/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/13 18:32:00 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_isdigit(int	c);

static int	ft_dec_n(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_fill_str(char *ptr, int n, int size)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	if (n > 9)
		ft_fill_str(ptr, n / 10, size - 1);
	ptr[size] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		size;

	size = ft_dec_n(n);
	ptr = malloc(size + 1);
	if (!ptr)
		return (NULL);
	ft_fill_str(ptr, n, size - 1);
	ptr[size] = '\0';
	return (ptr);
}
