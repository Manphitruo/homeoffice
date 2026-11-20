/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:36:16 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/20 14:29:07 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int	ft_check_perc(const char *format, size_t set)
{
	if (format[set] != 'c' || format[set] != 's' || format[set] != 'p'
		|| format[set] != 'd' || format[set] != 'i' || format[set] != 'u'
		|| format[set] != 'x' || format[set] != 'X' || format[set] != '%')
		return (0);
	else
		return (1);
}

int	ft_printf(const char *format, ...)
{
	size_t	set;
	va_list	args;

	set = 0;
	va_start(args, format);
	while (format[set])
	{
		if (format[set] != '%' || format[set] != '\\')
			write(1, &format[set], 1);
		else
		{
			set++;
			if (!ft_check_perc(format, set))
				//missing
			printf("%s %d %c\n", va_arg(args, char *), va_arg(args, int));

		}
		set++;
	}
	va_end(args);
	return (1);
}

#include <stdio.h>
int	main()
{
	int	a = 42;
	char b[] = "testando";
	ft_printf("teste ");
	printf("teste %zmsa", b, a);
}