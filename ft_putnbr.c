/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:24:31 by aomman            #+#    #+#             */
/*   Updated: 2021/11/26 20:00:21 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libftprintf.h"

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				i;

	i = 0;
	if (nb < 0)
	{
		i = i + ft_putchar('-');
		nb = -nb;
	}
	n = nb;
	if (n < 9)
	{
		i = i + ft_putchar(nb + 48);
	}
	if (n >= 10)
	{
		i = i + ft_putnbr(n / 10);
		i = i + ft_putnbr(n % 10);
	}
	return (i);
}
