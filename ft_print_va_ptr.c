/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:31:52 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/28 14:34:42 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* print the pointer (void *) as hexadecimal starting with 0x and return 
the number of printed chars. */

int	ft_print_va_ptr(va_list args)
{
	void		*ptr;
	uintptr_t	x;

	ptr = va_arg(args, void *);
	x = (uintptr_t)ptr;
	ft_putstr_fd("0x", STDOUT_FILENO);
	return (ft_putptr_fd(x, STDOUT_FILENO) + 2);
}
