/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:25:03 by maborges          #+#    #+#             */
/*   Updated: 2024/12/12 15:07:33 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H


# include <stdarg.h>
# include "../libft/libft.h"

int			ft_putchar(char c);
int			ft_putnbr(int n);
int			ft_putstr(char *s);

#endif
