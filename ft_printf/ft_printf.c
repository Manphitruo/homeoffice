/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:36:16 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/18 16:58:55 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	printf("%s: %d\n", va_arg(args, char *), va_arg(args, int));
	va_end(args);
	//va_start	a;
	//va_arg		b;
	//va_end		c;
	//va_copy		d;

	
}

int	main()
{
	ft_printf("fromat", "Murilo galvao", 42, 42, 42);
}