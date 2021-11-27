/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adresse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:17:30 by aomman            #+#    #+#             */
/*   Updated: 2021/11/26 22:38:18 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libftprintf.h"

static int	ft_putnbr_hex(unsigned long n)
{
	int		i;
	char	*a;

	a = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i = i + ft_putnbr_hex(n / 16);
		i = i + ft_putnbr_hex(n % 16);
	}
	else
	{
		i = i + ft_putchar(a[n]);
	}
	return (i);
}

int	ft_print_adresse(unsigned long n)
{
	int	i;

	i = 0;
	i = i + ft_putstr("0×");
	i = i + ft_putnbr_hex(n);
	return (i);
}
