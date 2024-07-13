/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahine <rchahine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 22:22:39 by rchahine          #+#    #+#             */
/*   Updated: 2024/07/09 17:11:53 by rchahine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0 ;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		count = count + write(1, &str[i], 1);
		i++;
	}
	return (count);
}
