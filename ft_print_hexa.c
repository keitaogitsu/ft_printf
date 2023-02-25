/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:09:26 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/25 21:10:11 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	ft_put_hexanbr(char *base, unsigned int num, int *n)
{
	if (num > 15)
	{
		ft_put_hexanbr(base, num / 16, n);
		ft_put_hexanbr(base, num % 16, n);
	}
	else
	{
		ft_putchar(base[num]);
		(*n)++;
	}
}

static void	ft_put_small_hexa(unsigned int num, int *n)
{
	int		i;
	char	hexa_s[17];

	i = 0;
	ft_strlcpy(hexa_s, "0123456789abcdef", 17);
	ft_put_hexanbr(hexa_s, num, n);
}

static void ft_put_large_hexa(unsigned int num, int *n)
{
	int		i;
	char	hexa_l[17];

	i = 0;
	ft_strlcpy(hexa_l, "0123456789ABCDEF", 17);
	ft_put_hexanbr(hexa_l, num, n);
}

void	ft_print_hexa(const char **fmt, int *n, va_list *ap)
{
	int	num;

	num = (unsigned int)va_arg(*ap, unsigned int);
	if (**fmt == 'x')
		ft_put_small_hexa(num, n);
	else if (**fmt == 'X')
		ft_put_large_hexa(num, n);
	(*fmt)++;
}