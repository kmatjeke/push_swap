/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:19:36 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 16:58:41 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **list)
{
	t_list *temp;
	t_list *data;

	if (!*list || !(*list)->next)
		return ;
	if (ft_ilstsize(*list) == 2)
		ft_rotatedata(list);
	if (*list && (*list)->next->next)
	{
		data = *list;
		while (data->next->next)
			data = data->next;
		temp = data->next;
		data->next = NULL;
		temp->next = *list;
		*list = temp;
	}
}
