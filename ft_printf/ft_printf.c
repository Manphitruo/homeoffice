/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:36:16 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/25 16:00:53 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_check_perc(const char *format, size_t set)
{
	if (format[set] != 'c' && format[set] != 's' && format[set] != 'p'
		&& format[set] != 'd' && format[set] != 'i' && format[set] != 'u'
		&& format[set] != 'x' && format[set] != 'X' && format[set] != '%')
		return (0);
	else
		return (1);
}

void	ft_selec_perc(const char *format, size_t set, va_list *args)
{
	if (format[set] == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if (format[set] == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	else if (format[set] == 'p')
		ft_itoa_base((uintptr_t)va_arg(*args, void *), "0123456789abcdef");
	else if (format[set] == 'd' || format[set] == 'i')
		ft_putnbr_fd(va_arg(*args, int), 1);
	else if (format[set] == 'u')
		ft_putunsig(va_arg(*args, unsigned int));
	else if (format[set] == 'x')
		ft_puthex(va_arg(*args, int), 0);
	else if (format[set] == 'X')
		ft_puthex(va_arg(*args, int), 1);
	else
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *format, ...)
{
	size_t	set;
	va_list	args;
	char chr;

	set = 0;
	va_start(args, format);
	while (format[set])
	{
		if (format[set] != '%')
			write(1, &format[set], 1);
		else
		{
			set++;
			if (ft_check_perc(format, set))
				ft_selec_perc(format, set, &args);
		}
		set++;
	}
	va_end(args);
	return (1);
}

#include <stdio.h>
int	main()
{
	int	i = 42;
	unsigned un = 21;
	char s[] = "testando";
	char c = 'C';
	int	*ptr = &i;

	ft_printf("teste %c %s %p %d %i %u %x %X %%", c, s, ptr, i, i, un, i, i);
	printf("\nteste %c %s %p %d %i %u %x %X %%\n", c, s, ptr, i, i, un, i, i);
}