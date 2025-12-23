/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohassaf <mohassaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:49:44 by mohassaf          #+#    #+#             */
/*   Updated: 2025/12/14 12:38:20 by mohassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned int i, int precision, int _switch)
{
	int	count;

	if (!i && !precision && !_switch)
		return (0);
	count = ft_count_hexa(i, precision);
	if (i <= 9)
		ft_putchar_fd(i + '0', 1);
	else if (i > 9 && i < 16)
		ft_putchar_fd(i + 87, 1);
	else
	{
		ft_hexa_lower(i / 16, precision, 1);
		ft_hexa_lower(i % 16, precision, 1);
	}
	return (count);
}
