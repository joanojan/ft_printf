/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 13:41:42 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/19 09:57:59 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_pow return the value of base raised to the power of exp */

int	ft_pow(int base, size_t exp)
{
	if (exp == 0)
		return (1);
	return (base * ft_pow(base, exp - 1));
}

/* calculate the number of digits of the integer n */

int	calc_digi(int n)
{
	if (n / 10 == 0)
		return (1);
	return (1 + calc_digi(n / 10));
}

/* positive integer to ascii. */

char	*pos_itoa(int n)
{
	char	*result;
	int		i;
	int		digits;
	int		divisor;

	digits = calc_digi(n);
	result = malloc(digits + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < digits)
	{
		divisor = ft_pow(10, digits - 1 - i);
		result[i++] = n / divisor + '0';
		n = n % divisor;
	}
	result[i] = '\0';
	return (result);
}

/* handle malloc for negative or positive and get the result on a string. */

static char	*ft_itoa_helper(int n)
{
	char	*result;
	char	*minus;
	int		size;

	if (n < 0)
		result = pos_itoa(-n);
	else
		result = pos_itoa(n);
	if (!result)
		return (NULL);
	if (n >= 0)
		return (result);
	size = ft_strlen(result) + 2;
	minus = malloc(size);
	if (!minus)
		return (NULL);
	ft_strlcpy(minus, "-", 2);
	ft_strlcat(minus, result, size);
	free(result);
	return (minus);
}

/* Convert integer to ascii */

char	*ft_itoa(int n)
{
	char	*result;

	if (n == -2147483648)
	{
		result = malloc(12);
		if (!result)
			return (NULL);
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	result = ft_itoa_helper(n);
	if (!result)
		return (NULL);
	return (result);
}
