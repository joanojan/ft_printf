/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:49:16 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/19 16:02:38 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The atoi() function converts the initial portion of the string pointed to by 
	nptr to int. The  string  may begin  with an arbitrary amount of white space 
	(as determined by isspace(3)) followed by a single optional '+' or '-' sign.
*/

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\f' || c == '\r' || c == '\v');
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+' )
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	result = 0;
	while (ft_isdigit(*nptr))
		result = result * 10 + (*nptr++ - '0');
	return (result * sign);
}
