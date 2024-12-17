/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:36:04 by maborges          #+#    #+#             */
/*   Updated: 2024/12/17 16:35:57 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_neg(long *nb, int *count)
{
	int	re;

	re = ft_putchar_fd('-', 1);
	if (re == -1)
		return (-1);
	*count += re;
	*nb = -*nb;
	return (0);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		count;
	int		re;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		if (check_neg(&nb, &count) == -1)
			return (-1);
	}
	if (nb >= 10)
	{
		re = ft_putnbr(nb / 10);
		if (re == -1)
			return (-1);
		count += re;
	}
	re = ft_putchar_fd((nb % 10) + '0', 1);
	if (re == -1)
		return (-1);
	count += re;
	return (count);
}
