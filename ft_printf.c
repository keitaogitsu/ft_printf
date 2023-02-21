/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kogitsu <kogitsu@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:51:04 by kogitsu           #+#    #+#             */
/*   Updated: 2023/02/21 09:43:44 by kogitsu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_print_str(const char **start, const char **fmt, int *n)
{
	while (**fmt != '%' && **fmt)
		(*fmt)++;
	write(1, *start, *fmt - *start);
	*n = *fmt - *start;
}

int ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int 		n;
	const char	*start;

	n = 0;
	va_start(ap, fmt);
	if (fmt == NULL)
		n = -1;
	while (n > 0 && *fmt)
	{
		start = fmt;
		if (*start != '%')
			ft_print_str(&start, &fmt, &n);
		else
			ft_proc_per(&start, &fmt, &n, &ap);
	}
	va_end(ap);
	return (n);
}

// void	ft_printf(const char *fmt, ...)
// {
// 	va_list ap;

// 	va_start(ap, fmt);

// 	// char c = (char)va_arg(ap, int);
// 	printf("arg_1: %s\n", fmt);
// 	printf("arg_2: %i\n", va_arg(ap, int));
// 	printf("arg_3: %f\n", va_arg(ap, double));
// 	va_end(ap);
// }

// int main(void)
// {
// 	char *arg_1 = "aaaa";
// 	int arg_2 = 5;
// 	double arg_3 = 3.14;
	
// 	ft_printf(arg_1, arg_2, arg_3);
// }