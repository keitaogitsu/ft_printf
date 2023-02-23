/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:20:23 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/23 17:12:19 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(const char **fmt, int *n, va_list *ap)
{
	char	c;

	c = (char)va_arg(*ap, int);
	ft_putchar(c);
	*n += 1;
	(*fmt)++;
}
