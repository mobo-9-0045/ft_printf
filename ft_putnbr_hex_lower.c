/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:35:46 by aomman            #+#    #+#             */
/*   Updated: 2021/11/27 01:35:51 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libftprintf.h"

int	ft_putnbr_hex_lower(unsigned int n)
{
	int		i;
	char	*a;

	a = "0123456789abcdef";
	i = 0;
	if (n >= 16)
	{
		i = i + ft_putnbr_hex_lower(n / 16);
		i = i + ft_putnbr_hex_lower(n % 16);
	}
	else
	{
		i = i + ft_putchar(a[n]);
	}
	return (i);
}
