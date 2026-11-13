/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/13 12:19:10 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	char		c;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}


