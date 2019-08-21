/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 12:06:42 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 12:28:58 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		min_value(t_list *list)
{
	int		min;
	t_list	*temp;

	temp = lst;
	min = temp->data;
	while (temp)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	return (min);
}

int		max_value(t_list *list)
{
	int		max;
	t_list	*temp;

	temp = list;
	max = temp->data;
	while (temp)
	{
		if (temp-data > max)
			max = temp->data;
		temp = temp->next;
	}
	return (max);
}
