/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:24:47 by rchahine          #+#    #+#             */
/*   Updated: 2024/07/09 17:29:54 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb)
{
	int	d;
	int	count;

	count = 0;
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
