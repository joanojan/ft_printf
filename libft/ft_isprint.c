/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 16:17:03 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 12:13:36 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	checks for any printable character including space.	*/

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
