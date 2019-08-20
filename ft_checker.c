/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:57:57 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:02:29 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_execute(t_list **alst, t_list **b, char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		ft_swapdata(alst);
	else if (ft_strcmp(str, "sb") == 0)
		ft_swapdata(b);
	else if (ft_strcmp(str, "ss") == 0)
		ft_ss(alst, b);
	else if (ft_strcmp(str, "pb") == 0)
		ft_pushdata(alst, b);
	else if (ft_strcmp(str, "pa") == 0)
		ft_pushdata(b, alst);
	else if (ft_strcmp(str, "ra") == 0)
		ft_rotatedata(alst);
	else if (ft_strcmp(str, "rb") == 0)
		ft_rotatedata(b);
	else if (ft_strcmp(str, "rra") == 0)
		ft_reverse_rotate(alst);
	else if (ft_strcmp(str, "rrb") == 0)
		ft_reverse_rotate(b);
	else if (ft_strcmp(str, "rr") == 0)
		ft_rr(alst, b);
	else if (ft_strcmp(str, "rrr") == 0)
		ft_rrr(alst, b);
}

int				ft_checker(t_list **alst, t_list **b)
{
	int		i;
	char	**av;

	i = 0;
	av = get_rule(i);
	if (ft_strcmp(av[0], "invalid") == 0)
		ft_display(*alst, *b);
	else if (ft_strcmp(av[0], "Error") == 0)
		ft_putstr_fd("Error\n", 2);
	else
	{
		while (av[i])
			ft_execute(alst, b, av[i++]);
		ft_display(*alst, *b);
	}
	delete_all(av, alst, b);
	return (0);
}
