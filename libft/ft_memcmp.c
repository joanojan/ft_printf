/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:49:26 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 14:25:16 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The  memcmp() function compares the first n bytes 
	(each interpreted as unsigned char) of the memory areas s1 and s2.	
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_clone;
	unsigned char	*s2_clone;
	size_t			i;

	if (n == 0)
		return (0);
	s1_clone = (unsigned char *)s1;
	s2_clone = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_clone[i] != s2_clone[i])
			return (s1_clone[i] - s2_clone[i]);
		i++;
	}
	return (0);
}
