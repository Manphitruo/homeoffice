/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:26:07 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/20 19:27:58 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	write(1, ptr, 14);
}

void	ft_putunsig(unsigned int num)
{
	char	c;

	if (num > 9)
		ft_putunsig(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

void	ft_puthex(int num, int up)
{
	const char	*base;
	size_t		i;

	base = "012345679abcdef";
	if (up)
		base = "012345679ABCDEF";
	if (num > 15)
		ft_puthex(num / 15, up);
	write(1, &base[num], 1);
}