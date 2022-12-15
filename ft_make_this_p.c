/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_this_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:32:14 by lsouquie          #+#    #+#             */
/*   Updated: 2022/12/15 12:28:11 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_make_this_p(long unsigned int n)
{
	long unsigned int	i;

	i = 0;
	if (n >= 16)
	{
		ft_make_this_p((n / 16));
		ft_make_this_p((n % 16));
	}
	else
	{
		if (n < 10)
			i += ft_putnbr_fd(n + 0, 1);
		else
			i += ft_putchar_fd(n + 'a' - 10, 1);
	}
	return (i);
}
