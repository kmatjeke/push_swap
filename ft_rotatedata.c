/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotatedata.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:25:51 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:01:24 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotatedata(t_list **lst)
{
	t_list *temp;
	t_list *data;

	if (*lst && (*lst)->next)
	{
		data = *lst;
		temp = (*lst)->next;
		while (data->next)
			data = data->next;
		data->next = *lst;
		(*lst)->next = NULL;
		*lst = temp;
	}
}
