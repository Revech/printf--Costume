/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:24:33 by rchahine          #+#    #+#             */
/*   Updated: 2024/07/09 18:53:25 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	d;
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	d = 1;
	while (nb / d >= 10)
	{
		d = d * 10;
	}
	while (d > 0)
	{
		count = count + ft_putchar('0' + nb / d);
		nb = nb % d;
		d = d / 10;
	}
	return (count);
}
