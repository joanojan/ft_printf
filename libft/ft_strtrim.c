/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 12:16:39 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 15:38:26 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* tells if the char belongs to the set string */

static int	isset(const char c, const char *set)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

/* remove leading chars that belong to the set string */

static char	*trim_leading(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		len;

	if (!s1)
		return (NULL);
	i = 0;
	while (isset(s1[i], set))
		i++;
	len = ft_strlen(s1 + i);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1 + i, len + 1);
	return (s);
}

/* remove trailing chars belonging to the set string */

static char	*trim_trailing(char const *s1, char const *set)
{
	char	*s;
	int		i;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1) - 1;
	while (isset(s1[i], set))
		i--;
	s = malloc(i + 2);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, i + 2);
	return (s);
}

/*
  Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters
  from ’set’ removed from the beginning and the end.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*result;

	if (!s1)
		return (NULL);
	s = trim_leading(s1, set);
	if (!s)
		return (NULL);
	result = trim_trailing(s, set);
	free(s);
	return (result);
}
