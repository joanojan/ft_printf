/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:39:15 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/28 14:42:10 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* Prints the unsigned int variadic argument in lowercase format is 'x'
	is passed and uppercase otherwise. Returns the number of printed chars. */

int	ft_print_va_hex(va_list args, const char fmt)
{
	unsigned int	x;

	x = va_arg(args, unsigned int);
	return (ft_puthex_fd(x, fmt, STDOUT_FILENO));
}
