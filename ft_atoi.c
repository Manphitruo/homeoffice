/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/10/30 19:02:38 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int	c);

int	ft_atoi(const char *ptr)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (ptr[i])
	{
		while (ft_isdigit(ptr[i]))
		{
			n *= 10;
			n += ptr[i];
			i++;
		}
		if (n > 0)
			return (n);
		i++;
	}
	return (n);
}
