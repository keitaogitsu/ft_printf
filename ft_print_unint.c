/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:34:56 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/26 12:36:09 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunnbr(unsigned int num, int *n)
{
	if (num > 9)
	{
		ft_putunnbr(num / 10, n);
		ft_putunnbr(num % 10, n);
	}
	else
	{
		ft_putchar((char)(num + '0'));
		(*n)++;
	}
}

void	ft_print_unint(const char **fmt, int *n, va_list *ap)
{
	unsigned int	num;

	num = (unsigned int)va_arg(*ap, unsigned int);
	ft_putunnbr(num, n);
	(*fmt)++;
}
