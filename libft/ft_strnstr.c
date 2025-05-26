/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 15:18:17 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/16 12:08:25 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
The strnstr() function locates the first occurrence of the null-terminated
string little in the string big, where not more than len characters are searched
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
	}
	return (NULL);
}
