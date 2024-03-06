/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:52:36 by haalouan          #+#    #+#             */
/*   Updated: 2023/11/21 19:28:02 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int x, int ret)
{
	if (x >= 16)
	{
		ret = ft_x(x / 16, ret);
		ret = ft_x(x % 16, ret);
	}
	else
	{
		if (x <= 9)
			ret = ft_c(x + '0', ret);
		else
			ret = ft_c(x + 'a' - 10, ret);
	}
	return (ret);
}
