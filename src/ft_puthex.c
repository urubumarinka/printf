/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:57:40 by maborges          #+#    #+#             */
/*   Updated: 2024/12/16 18:43:25 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long hex)
{
	char	*hexdigits;
	int		count;

	count = 0;
	hexdigits = "0123456789ABCDEF";
	if (hex < 16)
	{
		count += ft_putchar_fd(hexdigits[hex], 1);
	}
	else
	{
		count += ft_puthex(hex / 16);
		count += ft_puthex(hex % 16);
	}
	return (count);
}
