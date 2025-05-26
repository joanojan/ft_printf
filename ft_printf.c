/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:31:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/26 15:50:20 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *fmt, ...)
{
	int			count;
	va_list		args;

	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == '%')
			{
				ft_putchar_fd(*fmt, 1);
				fmt++;
				count++;
			}
			if (*fmt == 's')
			{
				print_string(args, 	
				fmt += ft_strlen(fmt);
				count += ft_strlen(fmt);
			}
		}
		else
		{
			ft_putchar_fd(*fmt, 1);
			count++;
			fmt++;
		}
	}
	va_end(args);
	return (count);
}
