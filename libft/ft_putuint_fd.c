/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:43:41 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/29 11:30:28 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putuint_fd(unsigned int x, int fd)
{
	char	c;
	int		printed_c;

	printed_c = 0;
	if (x > 9)
		printed_c += ft_putuint_fd(x / 10, fd);
	c = x % 10 + '0';
	write(fd, &c, 1);
	return (printed_c + 1);
}
