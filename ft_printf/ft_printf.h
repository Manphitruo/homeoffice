/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:49:42 by munoguer          #+#    #+#             */
/*   Updated: 2026/11/25 17:21:15 by munoguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdint.h>

int		ft_printf(const char *format, ...);
void	ft_itoa_base(uintptr_t n, char *base);
void	ft_putunsig(unsigned int num);
void	ft_puthex(int num, int up);

#endif