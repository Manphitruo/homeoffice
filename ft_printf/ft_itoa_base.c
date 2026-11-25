/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:28:56 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/25 17:44:08 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_dec_n(int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
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

static void	ft_fill_str(char *ptr, uintptr_t n, size_t size, char *base)
{
	size_t	baselen;

	baselen = ft_strlen(base);
	if (n >= baselen)
		ft_fill_str(ptr, n / baselen, size - 1, base);
	ptr[size] = base[n % baselen];
}

void	ft_itoa_base(uintptr_t n, char *base)
{
	char	*ptr;
	size_t	size;

	size = ft_dec_n(n);
	printf("%zu\n", size);
	ptr = malloc(size + 1);
	if (!ptr)
		return ;
	ft_fill_str(ptr, n, size - 1, base);
	ptr[size] = '\0';
	write(1, "0x", 2);
	write(1, ptr, size - 1);
	free(ptr);
}

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	int	*ptr;
	int	a = 3;

	ptr = a;
	ft_itoa_base((uintptr_t)ptr, "0123456789abcdef");
}