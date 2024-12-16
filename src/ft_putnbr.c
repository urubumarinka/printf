/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:36:04 by maborges          #+#    #+#             */
/*   Updated: 2024/12/16 19:57:25 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		count;
	int		re;

	count = 0;
	nb = n;
	if (nb == -2147483648)
	{
		count += ft_putchar_fd('-', 1);
		count += ft_putchar_fd('2', 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		count += ft_putchar_fd('-', 1);
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		re = ft_putchar_fd(nb + '0', 1);
		if (re == -1)
			return (-1);
	}

	return (count);
}
