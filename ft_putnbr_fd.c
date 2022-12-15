/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:32:36 by lsouquie          #+#    #+#             */
/*   Updated: 2022/12/08 17:10:47 by lsouquie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putchar_fd('-', fd);
		i += ft_putchar_fd('2', fd);
		i += ft_putnbr_fd(147483648, fd);
	}
	else if (n >= 0 && n <= 9)
		i += ft_putchar_fd(n + 48, fd);
	else if (n < 0)
	{
		i += ft_putchar_fd('-', fd);
		i += ft_putnbr_fd(n *(-1), fd);
	}
	else
	{
		i += ft_putnbr_fd(n / 10, fd);
		i += ft_putnbr_fd(n % 10, fd);
	}
	return (i);
}
