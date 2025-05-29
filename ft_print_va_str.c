/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_va_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:47:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/29 10:48:33 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Print the string from the variadic argument list to STDOUT */

int	ft_print_va_str(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (!s)
	{
		ft_putstr_fd("(null)", STDOUT_FILENO);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(s, STDOUT_FILENO);
	return (ft_strlen(s));
}
