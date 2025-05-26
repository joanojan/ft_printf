/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:32:28 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/15 13:11:38 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Applies the function f to each character of the
	string s, passing its index as the first argument
	and the character itself as the second. A new
	string is created (using malloc(3)) to store the
	results from the successive applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	int		len;

	if (!f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
