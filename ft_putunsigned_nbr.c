/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:37:06 by aomman            #+#    #+#             */
/*   Updated: 2021/11/26 20:09:23 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libftprintf.h"

int	ft_putunsigned_nbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb <= 9)
		i = i + ft_putchar(nb + 48);
	if (nb > 9)
	{
		i = i + ft_putunsigned_nbr(nb / 10);
		i = i + ft_putunsigned_nbr(nb % 10);
	}
	return (i);
}
