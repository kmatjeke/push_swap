/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:43:20 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/03 14:49:40 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_sort_1(t_list **a, t_list **b)
{
	ft_pa(a, b);
	ft_sb(b);
	ft_pb(a, b);
}

void	p_sort_2(t_list **a, t_list **b)
{
	ft_sb(b);
	p_sort_1(a, b);
	ft_sb(b);
}

void	p_sort_3(t_list **a, t_list **b)
{
	int num2;
	int num3;

	num2 = (*b)->next->data;
	num3 = (*b)->next->next->data;
	if ((*b)->data > num2 && num2 > num3)
		return ;
	if (ft_ilstsize(*b) == 2 && (*b)->data < num2)
		ft_sb(b);
	else if ((*b)->data > num2 && num2 < num3 && (*b)->data > num2)
		sort_1(a, b);
	else if ((*b)->data < y && num2 < num3)
		sort_2(a, b);
	else if ((*b)->data < num2 && num2 > num3 && (*b)->data < num3)
	{
		sort_1(a, b);
		ft_sb(b);
	}
	else if ((*b)->data > num2 && num2 < num3 && (*b)->data < num3)
	{
		sort_1(a, b);
		ft_sb(b);
	}
	else if ((*b)->data < num2 && num2 > num3 && (*b)->data > num3)
		ft_sb(b);
}
