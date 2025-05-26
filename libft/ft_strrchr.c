/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 11:10:49 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 15:40:32 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  The strchr() function returns a pointer to the first occurrence of
  the character c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	char		target;

	last = NULL;
	target = (char)c;
	if (target == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == target)
			last = s;
		s++;
	}
	return ((char *)last);
}
