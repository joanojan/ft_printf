/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:20:13 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 15:28:55 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  	If c is a lowercase letter, toupper() returns its uppercase equivalent,
  	if an uppercase representation exists in the current locale. 
	Otherwise, it returns c.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
