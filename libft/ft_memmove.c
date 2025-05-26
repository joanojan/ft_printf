/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:09:01 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 16:01:39 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The  memmove() function copies n bytes from memory area src to memory area dest.
The memory areas may overlap: copying takes place as though the bytes in src are
first copied into a temporary array that does not overlap src or dest, and the
bytes are then copied from the temporary array to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == src || n == 0)
		return (dest);
	i = n;
	d = dest;
	s = src;
	if (d > s)
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
