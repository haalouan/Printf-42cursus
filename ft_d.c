/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:08:38 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/21 19:53:03 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_putnbr(int n)
{
	char	a;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	a = n % 10 + '0';
	write(1, &a, 1);
}

int	ft_d(int d, int ret)
{
	ft_putnbr(d);
	if (d == -2147483648)
	{
		ret += 10;
	}
	if (d == 0)
		ret++;
	if (d < 0)
	{
		d = -d;
		ret++;
	}
	while (d > 0)
	{
		ret++;
		d = d / 10;
	}
	return (ret);
}
