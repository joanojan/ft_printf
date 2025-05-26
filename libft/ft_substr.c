/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:18:13 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 16:02:14 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Allocates memory (using malloc(3)) and returns a substring from the string ’s’.
  The substring starts at index ’start’ and has a maximum length of ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len)
		subs = malloc(s_len + 1);
	else
		subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (start < s_len && i < len)
		subs[i++] = s[start++];
	subs[i] = '\0';
	return (subs);
}
