/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:19:58 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 10:52:44 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_check_str(char *str)
{
	if (!ft_isnum(str))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	if (is_overflow(str))
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	return (1);
}
