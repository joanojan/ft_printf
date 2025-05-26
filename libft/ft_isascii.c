/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:48:52 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 13:45:49 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	checks whether c is a 7-bit unsigned char value that fits into the ASCII 
	character set. 
*/

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
