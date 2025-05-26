/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 10:24:29 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/17 13:44:09 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h> // SIZE_MAX

/*
	The  calloc() function allocates memory for an array of nmemb elements of
	size bytes each and returns a pointer to the allocated memory. The memory
	is set to zero. If nmemb or size is 0, then  calloc() returns either NULL,
	or a unique pointer value that can later be successfully passed to free().
	If the multiplication of nmemb and size would result in  integer  overflow,
	then calloc() returns an error.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	bytes = nmemb * size;
	ptr = malloc(bytes);
	if (!ptr)
		return (NULL);
	return (ft_memset(ptr, 0, bytes));
}
