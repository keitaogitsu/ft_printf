/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:06:49 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/23 17:13:21 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(const char **fmt, int *n, va_list *ap)
{
	int	num;

	num = (int)va_arg(*ap, int);
	ft_putnbr(num, n);
	(*fmt)++;
}
