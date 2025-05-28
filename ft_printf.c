/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:31:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/28 14:43:16 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* Increments the pointer and the counter by the printed chars */

static void	increments(const char **fmt, int *count, int printed)
{
	*count += printed;
	*fmt += 1;
}

static int	handle_format_specifier(const char c, va_list args)
{
	int	printed;

	printed = 1;
	if (c == '%')
		ft_putchar_fd(c, STDOUT_FILENO);
	if (c == 's')
		printed = ft_print_va_str(args);
	if (c == 'c')
		ft_print_va_chr(args);
	if (c == 'd' || c == 'i')
		printed = ft_print_va_int(args);
	if (c == 'u')
		printed = ft_print_va_uint(args);
	if (c == 'p')
		printed = ft_print_va_ptr(args);
	if (c == 'x' || c == 'X')
		printed = ft_print_va_hex(args, c);
	return (printed);
}

/*	write the output under the control of a format string  that specifies
	how subsequent arguments (or arguments accessed via the variable-length
	argument facilities of stdarg(3)) are converted for output. */

int	ft_printf(const char *fmt, ...)
{
	int			count;
	int			printed;
	va_list		args;

	count = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		printed = 1;
		if (*fmt == '%')
		{
			fmt++;
			printed = handle_format_specifier(*fmt, args);
		}
		else
			ft_putchar_fd(*fmt, STDOUT_FILENO);
		increments(&fmt, &count, printed);
	}
	va_end(args);
	return (count);
}
