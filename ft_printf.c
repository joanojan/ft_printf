/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:31:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/27 19:28:42 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

/* Increments the pointer and the counter by the printed chars */

static void increments(const char **fmt, int *count, int printed)
{
	*count += printed;
	*fmt += 1;
}

/* prints the string or null and returns its length */

int	print_string(va_list args)
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

/* prints the char */

void	print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, STDOUT_FILENO);
}

/* calls putnbr with the actual argument. 
	putnbr returns the number of printed chars */

int	print_int(va_list args)
{
	int	x;

	x = va_arg(args, int);
	return (ft_putnbr_fd(x, STDOUT_FILENO));
}

/* calls putuint with the actual argument. 
	putuint returns the number the printed chars */

int	print_uint(va_list args)
{
	unsigned int	x;

	x = va_arg(args, unsigned int);
	return (ft_putuint_fd(x, STDOUT_FILENO));
}

/* prints the memory address in hexadecimal 
	appending 0x to the printed output 
	and returns the number of printed chars */

int	print_ptr(va_list args)
{
	void		*ptr;
	uintptr_t	x;

	ptr = va_arg(args, void *);
	x = (uintptr_t)ptr;
	ft_putstr_fd("0x", STDOUT_FILENO);
	return (ft_puthex_fd(x, STDOUT_FILENO) + 2);
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
		if (*fmt == '%')
		{
			fmt++;
			printed = 1;
			if (*fmt == '%')
				ft_putchar_fd(*fmt, STDOUT_FILENO);
			if (*fmt == 's')
				printed = print_string(args);
			if (*fmt == 'c')
				print_char(args);
			if (*fmt == 'd' || *fmt == 'i')
				printed = print_int(args);
			if (*fmt == 'u')
				printed = print_uint(args);
			if (*fmt == 'p')
				printed = print_ptr(args);
			increments(&fmt, &count, printed);
		}
		else
		{
			ft_putchar_fd(*fmt, STDOUT_FILENO);
			increments(&fmt, &count, 1);
		}
	}
	va_end(args);
	return (count);
}
