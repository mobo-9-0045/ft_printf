/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:50:00 by aomman            #+#    #+#             */
/*   Updated: 2021/11/26 20:03:55 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libftprintf.h"

int	ft_putnbr_hex_upper(unsigned int n)
{
	int		i;
	char	*a;

	a = "0123456789ABDCDEF";
	i = 0;
	if (n >= 16)
	{
		i = i + ft_putnbr_hex_upper(n / 16);
		i = i + ft_putnbr_hex_upper(n % 16);
	}
	else
	{
		i = i + ft_putchar(a[n]);
	}
	return (i);
}
