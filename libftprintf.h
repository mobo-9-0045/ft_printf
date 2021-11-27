/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:18:32 by aomman            #+#    #+#             */
/*   Updated: 2021/11/27 17:19:52 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include<unistd.h>
# include<stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_strlen(char	*str);
int	ft_putnbr_hex_lower(unsigned int n);
int	ft_putnbr_hex_upper(unsigned int n);
int	ft_putunsigned_nbr(unsigned int nb);
int	ft_print_adresse(unsigned long n);
int	ft_printf(const char *format, ...);
#endif
