/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:17:28 by rchahine          #+#    #+#             */
/*   Updated: 2024/07/09 18:41:51 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	int		count;
	char	*hexmap;

	count = 0;
	hexmap = "0123456789ABCDEF";
	if (n == 0)
	{
		count = count + ft_putchar('0');
	}
	else if (n < 16)
		count += ft_putchar(hexmap[n]);
	else
	{
		count += ft_puthex(n / 16);
		count += ft_putchar(hexmap[n % 16]);
	}
	return (count);
}
