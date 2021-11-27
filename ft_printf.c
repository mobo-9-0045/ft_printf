/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:41:53 by aomman            #+#    #+#             */
/*   Updated: 2021/11/27 17:17:50 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdarg.h>
#include"libftprintf.h"

int	ft_puts(const char *format, int i, va_list arg)
{
	int	len;

	len = 0;
	if (format[i] == 'c')
		len = len + ft_putchar(va_arg(arg, int));
	if (format[i] == 's')
		len = len + ft_putstr(va_arg(arg, char *));
	if (format[i] == 'd')
		len = len + ft_putnbr(va_arg(arg, int));
	if (format[i] == 'i')
		len = len + ft_putnbr(va_arg(arg, int));
	if (format[i] == 'x')
		len = len + ft_putnbr_hex_lower(va_arg(arg, unsigned int));
	if (format[i] == 'X')
		len = len + ft_putnbr_hex_upper(va_arg(arg, unsigned int));
	if (format[i] == 'p')
		len = len + ft_print_adresse(va_arg(arg, unsigned int));
	if (format[i] == 'u')
		len = len + ft_putunsigned_nbr(va_arg(arg, unsigned long));
	if (format[i] == '%')
		len = len + ft_putchar(va_arg(arg, int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start(arg, format);
	i = 0;
	len = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			len = len + ft_puts(format, i, arg);
			i++;
		}
		else
			len = len + ft_putchar(format[i++]);
	}
	va_end(arg);
	return (len);
}
