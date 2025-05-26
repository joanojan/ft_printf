/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:41:06 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 15:30:06 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	If c is an uppercase letter, tolower() returns  its  lowercase  equivalent,
	if a lowercase representation exists in the current locale.
	Otherwise, it returns c.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
