/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:06:14 by rchahine          #+#    #+#             */
/*   Updated: 2024/07/09 18:51:39 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlow(unsigned int n)
{
	int		count;
	char	*hexmap;

	count = 0;
	hexmap = "0123456789abcdef";
	if (n == 0)
	{
		count = count + ft_putchar('0');
	}
	else if (n < 16)
		count += ft_putchar(hexmap[n]);
	else
	{
		count += ft_puthexlow(n / 16);
		count += ft_putchar(hexmap[n % 16]);
	}
	return (count);
}
