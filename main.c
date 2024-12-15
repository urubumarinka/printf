/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:21:02 by maborges          #+#    #+#             */
/*   Updated: 2024/12/16 00:42:15 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

int	main(void)
{
	ft_printf("Hello, World!\n");
	ft_printf("Number: %d\n", 42);
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", "Test String");
	ft_printf("Percent: %%\n");

	return (0);
}
