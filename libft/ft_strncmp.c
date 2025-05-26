/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 12:02:29 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/21 14:15:35 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  The  strcmp() function compares the two strings s1 and s2. 
  The locale is not taken into account.
  The  strncmp() function is similar, except it compares only 
  the first (at most) n bytes of s1 and s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char) s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
