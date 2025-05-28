/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvila-va <jvila-va@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:23:11 by jvila-va          #+#    #+#             */
/*   Updated: 2025/05/28 14:38:48 by jvila-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

typedef struct s_fmt_specifier
{
	char	specifier;
}	t_fmt_specifier;

int		ft_printf(const char *fmt, ...);
int		ft_print_va_str(va_list args);
void	ft_print_va_chr(va_list args);
int		ft_print_va_int(va_list args);
int		ft_print_va_uint(va_list args);
int		ft_print_va_ptr(va_list args);
int		ft_print_va_hex(va_list args, const char fmt);
