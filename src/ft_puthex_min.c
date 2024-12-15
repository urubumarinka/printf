/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:05:22 by maborges          #+#    #+#             */
/*   Updated: 2024/12/14 22:17:03 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex_min(unsigned long hex)
{
	char	*hexdigits;
	int		count;

	count = 0;
	hexdigits = "0123456789abcdef";
	if (hex < 16)
	{
		count += ft_putchar(hexdigits[hex]);
	}
	else
	{
		count += ft_puthex(hex / 16);
		count += ft_puthex(hex % 16);
	}
	return (count);
}
