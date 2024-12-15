/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:25:03 by maborges          #+#    #+#             */
/*   Updated: 2024/12/15 01:03:22 by maborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
# include <stdio.h> // lembrar de tirar

int			ft_printf(const char *__format, ...);
int			ft_putchar(char c);
int			ft_putnbr(int n);
int			ft_putstr(char *s);
int			ft_putadress(void *pointer);
int			ft_puthex_min(unsigned long hex);
int			ft_puthex(unsigned long hex);

#endif
