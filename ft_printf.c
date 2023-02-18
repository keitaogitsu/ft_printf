/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:51:04 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/18 19:01:00 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);

	char c = (char)va_arg(ap, int);

	va_end(ap);
}