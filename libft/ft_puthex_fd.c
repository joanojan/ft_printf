/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:20:52 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/28 11:35:48 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	Prints to fd the unsigned int argument converted to unsigned hexadecimal.
	If the format is x the radix is lowercase, uppercase otherwise ...
	Returns the number of printed chars. */

int	ft_puthex_fd(unsigned int x, char format, int fd)
{
	char	*lower_radix;
	char	*upper_radix;
	char	*radix;
	int		printed_c;
	char	c;

	lower_radix = "0123456789abcdef";
	upper_radix = "0123456789ABCDEF";
	if (format == 'x')
		radix = lower_radix;
	else
		radix = upper_radix;
	printed_c = 0;
	if (x > 15)
		printed_c += ft_puthex_fd(x / 16, format, fd);
	c = radix[x % 16];
	write(fd, &c, 1);
	return (printed_c + 1);
}
