/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:35:34 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 16:00:08 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the string ’s’ to the specified file descriptor. */

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
