/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:16:49 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/23 15:44:45 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(const char **fmt, int *n, va_list *ap)
{
	char	*s;
	int		len;

	s = (char *)va_arg(*ap, char *);
	len = (int)ft_strlen(s);
	write(1, s, len);
	(*fmt)++;
	*n += len;
}
