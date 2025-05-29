/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:28:27 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/29 11:28:48 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Outputs the integer ’n’ to the specified file descriptor and 
	returns the number of printed characters.
*/

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		printed_c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(fd, "-", STDOUT_FILENO);
		return (ft_putnbr_fd(-n, fd) + 1);
	}
	printed_c = 0;
	if (n > 9)
		printed_c += ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	ft_putchar_fd(c, fd);
	return (printed_c + 1);
}
