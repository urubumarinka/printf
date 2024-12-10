/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:50:45 by maborges          #+#    #+#             */
/*   Updated: 2024/12/10 11:08:29 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	n;
	va_start(args, format);

	// count the number of % and put at n variable

	i = 0;
	while (i < n)
	{
		va_arg(args, __CLANG_ATOMIC_BOOL_LOCK_FREE )
	}

	va_end(args);
}

#include <stdarg.h>

/* minprintf: minimal printf with variable argument list */

void minprintf(char *fmt, ...)

{

va_list ap; /* points to each unnamed arg in turn */

char *p, *sval;

int ival;

double dval;

va_start(ap, fmt); /* make ap point to 1st unnamed arg */

for (p = fmt; *p; p++) {

if (*p != '%') {

putchar(*p);

continue;

}

switch (*++p) {

case 'd':

ival = va_arg(ap, int);

printf("%d", ival);

break;

case 'f':

dval = va_arg(ap, double);

printf("%f", dval);

break;

case 's':

for (sval = va_arg(ap, char *); *sval; sval++)

putchar(*sval);

break;

default:

putchar(*p);

break;

}

}

va_end(ap); /* clean up when done */

}
