/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:50:45 by maborges          #+#    #+#             */
/*   Updated: 2025/01/24 15:16:22 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* static int	ft_validspec(char c)
{
	return (c == 'd' || c == 'i' || c == 'c' || c == 's'
		|| c == 'x' || c == 'X' || c == 'p' || c == 'u' || c == '%');
} */

static int	ft_check(va_list *args, char c)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(*args, int));
	else if (c == 'c')
		count = ft_putchar_fd(va_arg(*args, int), 1);
	else if (c == 's')
		count = ft_putstr(va_arg(*args, char *));
	else if (c == 'x')
		count = ft_puthex_min(va_arg(*args, unsigned long));
	else if (c == 'X')
		count = ft_puthex(va_arg(*args, unsigned long));
	else if (c == 'p')
		count = ft_putadress(va_arg(*args, void *));
	else if (c == 'u')
		count = ft_putnbr_unsigned(va_arg(*args, unsigned int));
	else if (c == '%')
		count = ft_putchar_fd('%', 1);
	else
		count += write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (0);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_check(&args, format[++i]);
		else
			count += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
