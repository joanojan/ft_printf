/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_uint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:25:21 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/29 10:46:40 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print the unsigned integer from the vaariadic argument list to STDOUT.
	Returns the number of printed characters. */

int	ft_print_va_uint(va_list args)
{
	unsigned int	x;

	x = va_arg(args, unsigned int);
	return (ft_putuint_fd(x, STDOUT_FILENO));
}
