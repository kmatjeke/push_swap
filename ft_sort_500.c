/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:24:36 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/17 12:56:07 by kmatjeke         ###   ########.fr       */
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

static void		ft_sortbig(t_list **alst, t_list **b, int loop)
{
	int m;
	int	t;

	m = ft_median(*alst, 1, loop);
	t = ft_median(*alst, 1, loop * 2);
	while ((*alst)->next)
	{
		if (check_median(*alst, m) == 0)
		{
			loop--;
			m = ft_median(*alst, 1, loop);
			t = ft_median(*alst, 1, loop * 2);
		}
		if (loop == 0)
			break ;
		while ((*alst)->data > m)
			ft_ra(alst);
		if ((*alst)->data <= m && (*alst)->data >= t)
			ft_pb(alst, b);
		else if ((*alst)->data <= m && (*alst)->data <= t)
		{
			ft_pb(alst, b);
			ft_rb(b);
		}
	}
}

void			ft_sort_500(t_list **a, t_list **b)
{
	ft_sortbig(a, b, 5);
	while ((*b)->next)
		ft_pa(a, b);
	sort(a, b);
	reverse_sort(a, b);
}
