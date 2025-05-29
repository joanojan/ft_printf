/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:31:52 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/29 11:45:08 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* print the pointer (void *) as hexadecimal starting with 0x and return 
the number of printed chars. */

int	ft_print_va_ptr(va_list args)
{
	void		*ptr;
	uintptr_t	x;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		ft_putstr_fd("(nil)", STDOUT_FILENO);
		return (5);
	}
	x = (uintptr_t)ptr;
	ft_putstr_fd("0x", STDOUT_FILENO);
	return (ft_putptr_fd(x, STDOUT_FILENO) + 2);
}
