/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:05:06 by maborges          #+#    #+#             */
/*   Updated: 2024/12/16 00:01:23 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthex(unsigned long long nbr)
{
	char	*hexdigits;
	int		count;

	count = 0;
	hexdigits = "0123456789abcdef";
	if (nbr < 16)
	{
		count += write(1, &hexdigits[nbr], 1);
	}
	else
	{
		count += ft_puthex(nbr / 16);
		count += ft_puthex(nbr % 16);
	}
	return (count);
}

int	ft_putadress(void *pointer)
{
	int	count;

	count = 0;
	if (pointer == NULL)
	{
		write(1, "(nil)", 5);
		return (0);
	}
	write(1, "0x", 2);
	count = puthex((unsigned long long)pointer);
	return (count);
}
