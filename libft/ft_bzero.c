/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:14:51 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/19 09:55:55 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  bzero() function erases the data in the n bytes of the memory starting
at the location pointed to by s, by writing zeros 
(bytes containing '\0') to that area.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	if (n == 0)
		return ;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
}
