/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:16:42 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 14:59:13 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Outputs the character ’c’ to the specified file descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
