/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus_or_space_flag.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohassaf <mohassaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 10:53:51 by mohassaf          #+#    #+#             */
/*   Updated: 2025/12/14 11:15:49 by mohassaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	plus_or_space_flag(t_flags list, int sign, char flag)
{
	if (flag == '+')
	{
		if (!list.plus || sign == 1)
			return (0);
		ft_putchar_fd('+', 1);
		return (1);
	}
	if (flag == ' ')
	{
		if (!list.space || list.plus == 1 || sign == 1)
			return (0);
		ft_putchar_fd(' ', 1);
		return (1);
	}
	return (0);
}
