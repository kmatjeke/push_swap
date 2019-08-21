/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_rule.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:52:05 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 10:47:07 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_rule(char *av)
{
	if (ft_strcmp(av, "sa") == 0 || ft_strcmp(av, "sb") == 0 ||
			ft_strcmp(av, "ss") == 0 || ft_strcmp(av, "pa") == 0 ||
			ft_strcmp(av, "pb") == 0 || ft_strcmp(av, "ra") == 0 ||
			ft_strcmp(av, "rb") == 0 || ft_strcmp(av, "rr") == 0 ||
			ft_strcmp(av, "rra") == 0 || ft_strcmp(av, "rrb") == 0 ||
			ft_strcmp(av, "rrr") == 0)
		return (1);
	return (0);
}
