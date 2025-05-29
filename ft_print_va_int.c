/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:11:49 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/29 10:47:50 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print the int arg of th va_list and return
	the number of printed chars. */

int	ft_print_va_int(va_list args)
{
	int	x;

	x = va_arg(args, int);
	return (ft_putnbr_fd(x, STDOUT_FILENO));
}
