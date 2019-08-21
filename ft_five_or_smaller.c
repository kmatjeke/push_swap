/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_or_smaller.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 11:08:39 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 11:36:56 by kmatjeke         ###   ########.fr       */
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

static void	ft_sort_four
