/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:58:49 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/24 11:45:00 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

void	ft_print_c(const char **fmt, int *n, va_list *ap);
void	ft_print_s(const char **fmt, int *n, va_list *ap);
size_t	ft_strlen(const char *s);
void	ft_print_int(const char **fmt, int *n, va_list *ap);
void	ft_putchar(char c);
void	ft_print_unint(const char **fmt, int *n, va_list *ap);

#endif