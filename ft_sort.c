/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:08:24 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/17 13:13:52 by kmatjeke         ###   ########.fr       */
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
	int		new;
	t_list	*lst;

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
	*n_min = ft_next_min(*list, *min);
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

void			sort(t_list **a, t_list **b)
{
	t_point	p;

	values(a, &p.min, &p.n_min, &p.pos);
	p.even = 0;
	while (ft_ilstsize(*a) > 6)
	{
		if ((*a)->data == p.min || (*a)->data == p.n_min || (*a)->data == p.pos)
		{
			ft_pb(a, b);
			if ((*b)->data < (*b)->next->data)
				ft_sb(b);
			p.even++;
			if (!check_num(*a, p.min, p.n_min, p.pos))
			{
				p_sort_3(a, b);
				values(a, &p.min, &p.n_min, &p.pos);
			}
		}
		if (ft_pos(*a, p.min, p.n_min, p.pos) <= (int)ft_ilstsize(*a) / 2)
			ft_ra(a);
		else
			ft_rra(a);
	}
	finish(a, b, p.even);
}
