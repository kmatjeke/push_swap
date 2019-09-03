/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:33:12 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/03 15:09:35 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		check_median(t_list *list, int m)
{
	t_list *lst;

	lst = list;
	while (lst)
	{
		if (lst->data <= m)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	ft_sort(t_list **list, t_list **b, int loop)
{
	int median;
	int	t;

	median = ft_median(*list, 1, loop);
	t = ft_median(*list, 1, loop * 2);
	while ((*list)->next)
	{
		if (check_median(*list, median) == 0)
		{
			q--;
			median = ft_median(*list, 1, loop);
			t = ft_median(*list, 1, loop * 2);
		}
		if (loop == 1)
			break ;
		while ((*list)->data > median)
			ft_ra(list);
		while ((*list)->data <= median)
			ft_pb(list, b);
	}
}
	
void	ft_sort_100(t_list **a, t_list **b)
{
	ft_sort(a, b, 2);
	sort(a, b);
}
