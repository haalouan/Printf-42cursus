/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:34:52 by haalouan          #+#    #+#             */
/*   Updated: 2023/12/05 15:54:07 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_prct(const char *format, va_list args, int i, int ret)
{
	if (format[i] == 'c')
		ret = ft_c(va_arg(args, int), ret);
	else if (format[i] == 's')
		ret = ft_s(va_arg(args, char *), ret);
	else if (format[i] == 'd' || format[i] == 'i')
		ret = ft_d(va_arg(args, int), ret);
	else if (format[i] == 'x')
		ret = ft_x(va_arg(args, unsigned int), ret);
	else if (format[i] == 'X')
		ret = ft_big_x(va_arg(args, unsigned int), ret);
	else if (format[i] == 'p')
		ret = ft_p(va_arg(args, unsigned long), ret);
	else if (format[i] == 'u')
		ret = ft_u(va_arg(args, unsigned int), ret);
	else if (format[i] == '%')
		ret = ft_c('%', ret);
	else
		ret = ft_c(format[i], ret);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, format);
	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			ret = ft_prct(format, args, ++i, ret);
		}
		else
			ret = ft_c(format[i], ret);
		i++;
	}
	va_end(args);
	return (ret);
}
