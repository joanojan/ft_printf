/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:56:17 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/28 12:26:21 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* print as hexadecimal */

int	ft_putptr_fd(uintptr_t n, int fd)
{
	int		printed_c;
	char	*radix;
	char	c;

	radix = "0123456789abcdef";
	printed_c = 0;
	if (n > 15)
		printed_c += ft_putptr_fd(n / 16, fd);
	c = radix[n % 16];
	write(fd, &c, 1);
	return (printed_c + 1);
}
