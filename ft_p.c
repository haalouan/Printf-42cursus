/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:11:55 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/21 19:31:12 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long p, int ret)
{
	char	result[255];
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	ret = ft_s("0x", ret);
	while (p >= 16)
	{
		result[i] = hex[p % 16];
		p = p / 16;
		i++;
	}
	if (p < 16)
		result[i] = hex[p];
	while (i >= 0)
	{
		ret = ft_c(result[i], ret);
		i--;
	}
	return (ret);
}
