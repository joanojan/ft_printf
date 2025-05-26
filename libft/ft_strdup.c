/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:39:04 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 15:50:08 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>

/*
  The  strdup() function returns a pointer to a new string which is a duplicate
  of the string s. Memory for the new string is obtained with malloc(3), 
  and can be freed with free(3).
*/

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
