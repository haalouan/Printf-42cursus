/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:52:29 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/16 15:37:34 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_big_x(unsigned int x, int ret)
{
	if (x >= 16)
	{
		ret = ft_big_x(x / 16, ret);
		ret = ft_big_x(x % 16, ret);
	}
	else
	{
		if (x <= 9)
			ret = ft_c(x + '0', ret);
		else
			ret = ft_c(x + 'A' - 10, ret);
	}
	return (ret);
}
