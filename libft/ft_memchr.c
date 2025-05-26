/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:57:01 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 13:58:11 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memchr() function  scans  the initial n bytes of the memory area 
	pointed to by s for the first instance of c. Both c and the bytes of 
	the memory area pointed to by s are interpreted as unsigned char.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = c;
	while (n--)
	{
		if (*p == uc)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
