/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:50:45 by maborges          #+#    #+#             */
/*   Updated: 2024/12/12 17:33:51 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"

int	ft_check(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'x')
		count = ft_puthex(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_puthex_m(va_arg(args, unsigned int));
	else if (c == 'p')
	{
		count = ft_putstr(("0x"));
		count += ft_putadress(va_arg(args, unsigned long long));
	}
	else if (c == 'u')
		count = ft_putnbr(va_arg(args, unsigned int));
	else if (c == '%')
		return (ft_putchar('%'));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				count += ft_check(args, format[++i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
