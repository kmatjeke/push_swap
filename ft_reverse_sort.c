/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:02:08 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/17 13:03:02 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		next_max(t_list *list, int max)
{
	t_list	*lst;
	int		new;

	lst = list;
	new = list->data;
	while (lst)
	{
		if (lst->data > new && lst->data != max)
			new = lst->data;
		lst = lst->next;
	}
	return (new);
}

static int		max_pos(t_list *list, int max, int n_max)
{
	int i;

	i = 0;
	while (list)
	{
		if (list->data == max || list->data == n_max)
			break ;
		list = list->next;
		i++;
	}
	return (i);
}

static void		finish(t_list **stacka, t_list **stackb)
{
	if (!*stackb)
		return ;
	if ((*stackb)->next && (*stackb)->data > (*stackb)->next->data)
	{
		ft_sb(stackb);
		ft_pa(stacka, stackb);
		if ((*stacka)->data > (*stackb)->next->data)
			ft_sa(stacka);
		ft_pa(stacka, stackb);
		if ((*stacka)->data > (*stacka)->next->data)
			ft_sa(stacka);
		return ;
	}
	ft_pa(stacka, stackb);
	if ((*stacka)->data > (*stacka)->next->data)
		ft_sa(stacka);
}

void			reverse_sort(t_list **stacka, t_list **stackb)
{
	int		max;
	int		pos;
	int		n_max;

	max = max_value(*stackb);
	n_max = next_max(*stackb, max);
	pos = min_pos(*stackb, max);
	while (ft_ilstsize(*stackb) > 1)
	{
		if ((*stackb)->data == max || (*stackb)->data == n_max)
		{
			ft_pa(stacka, stackb);
			max = max_value(*stackb);
			n_max = next_max(*stackb, max);
			if ((*stacka)->data < max)
				n_max = max;
			if ((*stacka)->data > (*stacka)->next->data)
				ft_sa(stacka);
		}
		if (max_pos(*stackb, max, n_max) < (int)ft_ilstsize(*stackb) / 2)
			ft_rb(stackb);
		else
			ft_rrb(stackb);
	}
	finish(stacka, stackb);
}
