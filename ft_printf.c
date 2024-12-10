/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:50:45 by maborges          #+#    #+#             */
/*   Updated: 2024/12/10 16:29:31 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		n;
	char	*p;

	va_start(args, format);
	p = format;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] != '%')
			ft_putchar(p[i]);
		i++;
		if (p[i] == '%')
		{
			if (p[i + 1] == 'd')
				ft_case_d()
		}
	}
	va_end(args);
}
#include <stdarg.h>

/* minprintf: minimal printf with variable argument list */
void	minprintf(char *fmt, ...)
{
	va_list ap; /* points to each unnamed arg in turn */
	char *p, *sval;
	int ival;
	double dval;
	va_start(ap, fmt); /* make ap point to 1st unnamed arg */
	for (p = fmt; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue ;
		}
		switch (*++p)
		{
		case 'd':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break ;
		case 'f':
			dval = va_arg(ap, double);
			printf("%f", dval);
			break ;
		case 's':
			for (sval = va_arg(ap, char *); *sval; sval++)
				putchar(*sval);
			break ;
		default:
			putchar(*p);
			break ;
		}
	}
	va_end(ap); /* clean up when done */
