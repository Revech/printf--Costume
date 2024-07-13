/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:57:26 by rchahine          #+#    #+#             */
/*   Updated: 2024/07/09 17:18:58 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long long n)
{
	char	*symbol;
	int		count;

	count = 0;
	if (!n)
		return (write(1, "(nil)", 5));
	if (n < 16)
		count += ft_putstr("0x");
	symbol = "0123456789abcdef";
	if (n >= 16)
		count += ft_putpointer(n / 16);
	write(1, &symbol[n % 16], 1);
	return (count + 1);
}	
