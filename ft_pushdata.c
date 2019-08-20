/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushdata.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:55:31 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 16:46:58 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushdata(t_list **src, t_list **dest)
{
	t_list *temp;

	if (!*src)
		return ;
	temp = (*src)->next;
	if (*dest == NULL)
	{
		(*src)->next = NULL;
		*dest = *src;
		*src = temp;
	}
	else
	{
		(*src)->next = *dest;
		*dest = *src;
		*src = temp;
	}
}
