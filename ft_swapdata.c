/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapdata.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:38:49 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:23:18 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapdata(t_list **list)
{
	t_list	*temp;
	int		n;

	n = 1;
	if (*list && (*list)->next)
	{
		temp = (*list)->next;
		(*list)->next = temp->next;
		temp->next = *list;
		*list = temp;
	}
}
