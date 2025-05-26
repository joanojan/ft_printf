/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:08:02 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/16 13:07:42 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Applies the function ’f’ to each character of the
	string passed as argument, passing its index as
	the first argument. Each character is passed by
	address to ’f’ so it can be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	if (!f || !s)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
