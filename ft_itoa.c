/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/06 20:09:04 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_isdigit(int	c);

static int	ft_dec_n(int n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_fill_str(char *ptr, int n)
{
	if (n < 0)
	{
		*ptr = '-';
		ptr++;
	}
	if (n > 9)
		ft_fill_str(++ptr, n / 10);
	*ptr = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*ptr;

	ptr = malloc(ft_dec_n(n));
	if (!ptr)
		return (NULL);
	ft_fill_str(ptr, n);
	return (ptr);
}
