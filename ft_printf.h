/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:34:26 by haalouan          #+#    #+#             */
/*   Updated: 2023/12/05 15:54:32 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_c(char c, int ret);
int	ft_d(int d, int ret);
int	ft_s(char *s, int ret);
int	ft_x(unsigned int x, int ret);
int	ft_big_x(unsigned int x, int ret);
int	ft_p(unsigned long x, int ret);
int	ft_u(unsigned int u, int ret);

#endif
