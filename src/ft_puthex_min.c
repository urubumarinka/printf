/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:05:22 by maborges          #+#    #+#             */
/*   Updated: 2025/01/24 15:58:02 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_min(unsigned int hex)
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
		count += ft_puthex_min(hex / 16);
		count += ft_puthex_min(hex % 16);
	}
	return (count);
}
