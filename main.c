/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:21:02 by maborges          #+#    #+#             */
/*   Updated: 2024/12/15 02:17:01 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str = "linda";
	int		nbr;

	nbr = 6542;
	//int		output_ft;
	//int		output_og;

	ft_printf("casa");
	//output_og = printf("ola gente----->\n");

	//ft_printf("quantity of %d chars were printed\n", output_ft);
	//printf("quantity of %d cbars were printed\n", output_og);

	//ft_printf("");
	//printf("");

	//output_ft =

	ft_printf("ola gente, %s\n", str);
	ft_printf("%d", nbr);
	//output_og = printf("ola gente, %s\n", str);

	//ft_printf("quantity of %d chars were printed\n", output_ft);
	//printf("quantity of %d cbars were printed\n", output_og);
	return (0);
}
