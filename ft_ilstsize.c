/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:05:29 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:05:34 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t		ft_ilstsize(t_list *list)
{
	t_list	*temp;
	size_t	size;

	size = 0;
	if (list == NULL)
		return (0);
	temp = list;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
