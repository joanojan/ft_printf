/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:46:49 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 13:47:25 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	checks  for  an  alphabetic  character; in the standard "C" locale, 
	it is equivalent to (isupper(c) || islower(c)).
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
