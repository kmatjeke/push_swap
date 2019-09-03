/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:08:24 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/03 14:43:09 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		check_num(t_list *list, int min, int n_min, int pos)
{
	t_list *lst;

	lst = list;
	while (lst)
	{
		if (lst->data == min || lst->data == n_min || lst->data == pos)
			return (1);
		lst = lst->next;
	}
	return (0);
}

static int		ft_next_min(t_list *list, int min)
{
	t_list *lst;
	int		new;

	lst = list;
	new = list->data;
	while (lst)
	{
		if (lst->data < new && lst->data != min)
			new = lst->data;
		lst = lst->next;
	}
	return (new);
}

static void		values(t_list **list, int *min, int *n_min, int *p)
{
	*min = min_value(*list);
	*n_min = ft_next_min(*list, *m);
	*p = ft_next_min(*list, *n_min);
}

static void		finish(t_list **list, t_list **b, int even)
{
	ft_six_or_smaller(list, b);
	while (--even >= 0)
	{
		if ((*list)->data > (*list)->next->data)
			ft_sa(list);
		ft_pa(list, b);
	}
}

void			sort(t_list **stacka, t_list **stackb)
{
	t_point	point;

	values(stacka, &point.min, &point.n_min, &point.pos);
	point.even = 0;
	while (ft_ilstsize(*stacka) > 6)
	{
		if ((*stacka)->data == point.min || (*stacka)->data == point.n_min ||
				(*stacka)->data == point.pos)
		{
			ft_pb(a, b);
			if ((*stackb)->data < (*stackb)->next->data)
				ft_sb(b);
			point.even++;
			if (!check_num(*stacka, point.min, point.n_min, point.pos))
			{
				sort_three(stacka, stackb);
				values(stacka, &point.min, &point.n_min, &point.pos);
			}
		}
		if (ft_pos(*stacka, point.min, point.n_min, point.pos)
				<= (int)ft_ilstsize(*stacka) / 2)
			ft_ra(a);
		else
			ft_rra(a);
	}
	finish(stacka, stackb, point.even);
}
