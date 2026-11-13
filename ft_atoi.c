/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/13 18:19:17 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

static int	ft_isspace(char c)
{
	if (('\t' <= c && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *ptr)
{
	long int	n;
	int	i;
	int	sign;

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
	while(ft_isdigit(ptr[i]))
	{
		n *= 10;
		n += (ptr[i] - '0');
		i++;
	}
	return (n * sign);
}
