/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_or_smaller.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:08:39 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/17 13:04:49 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_three(t_list **list)
{
	int	n1;
	int	n2;
	int	n3;

	if (ft_issorted(*list) || !*list)
		return ;
	n1 = (*list)->data;
	n2 = (*list)->next->data;
	n3 = (*list)->next->next->data;
	if ((n1 > n2) && (n1 > n3) && (n2 > n3))
	{
		ft_sa(list);
		ft_rra(list);
	}
	else if ((n1 > n2) && (n1 > n3) && (n2 < n3))
		ft_ra(list);
	else if ((n1 > n2) && (n1 < n3) && (n2 < n3))
		ft_sa(list);
	else if ((n1 < n2) && (n1 < n3) && (n2 > n3))
	{
		ft_sa(list);
		ft_ra(list);
	}
	else if ((n1 < n2) && (n1 > n3) && (n2 > n3))
		ft_rra(list);
}

static void	ft_sort_four(t_list **list, t_list **b)
{
	int	min;
	int	pos;

	if (ft_issorted(*list) || !*list)
		return ;
	min = min_value(*list);
	pos = min_pos(*list, min);
	if (pos <= (int)ft_ilstsize(*list) / 2)
		while ((*list)->data != min)
			ft_ra(list);
	else
		while ((*list)->data != min)
			ft_rra(list);
	ft_pb(list, b);
	ft_sort_three(list);
	ft_pa(list, b);
}

static void	ft_sort_five(t_list **list, t_list **b)
{
	int	min;
	int	pos;

	if (ft_issorted(*list) || !*list)
		return ;
	min = min_value(*list);
	pos = min_pos(*list, min);
	if (pos <= (int)ft_ilstsize(*list) / 2)
		while ((*list)->data != min)
			ft_ra(list);
	else
		while ((*list)->data != min)
			ft_rra(list);
	ft_pb(list, b);
	ft_sort_four(list, b);
	ft_pa(list, b);
}

static void	ft_sort_six(t_list **list, t_list **b)
{
	int	min;
	int	pos;

	if (ft_issorted(*list) || !*list)
		return ;
	min = min_value(*list);
	pos = min_pos(*list, min);
	if (pos <= (int)ft_ilstsize(*list) / 2)
		while ((*list)->data != min)
			ft_ra(list);
	else
		while ((*list)->data != min)
			ft_rra(list);
	ft_pb(list, b);
	ft_sort_five(list, b);
	ft_pa(list, b);
}

void		ft_six_or_smaller(t_list **list, t_list **b)
{
	if (ft_issorted(*list) || !*list)
		return ;
	else
	{
		if (ft_ilstsize(*list) == 2)
			ft_sa(list);
		else if (ft_ilstsize(*list) == 3)
			ft_sort_three(list);
		else if (ft_ilstsize(*list) == 4)
			ft_sort_four(list, b);
		else if (ft_ilstsize(*list) == 5)
			ft_sort_five(list, b);
		else if (ft_ilstsize(*list) == 6)
			ft_sort_six(list, b);
	}
}
