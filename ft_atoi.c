/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/12 23:50:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int	c);

static long int	ft_power(long int n, long int power)
{
	if (power == 1)
		return(n);
	return (n * ft_power(n, power - 1));
}

int	ft_atoi(const char *ptr)
{
	long int	n;
	int	i;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (ptr[i])
	{
		if (ptr[i] == '-')
			sign = -1;
		while (ft_isdigit(ptr[i]))
		{
			if (n > ((ft_power(2,sizeof(int) * 8 - 1)) / 10) - (ptr[i] - '0'))
				return (0);
			n *= 10;
			n += (ptr[i] - '0');
			i++;
		}
		if (n > 0)
			return (n * sign);
		i++;
	}
	return (n * sign);
}
