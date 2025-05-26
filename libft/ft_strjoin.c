/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:06:37 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 15:46:03 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates memory (using malloc(3)) and returns a new string, which is the result
of concatenating ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*join;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(len + 1);
	if (!join)
		return (NULL);
	*join = '\0';
	ft_strlcat(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, len + 1);
	return (join);
}
