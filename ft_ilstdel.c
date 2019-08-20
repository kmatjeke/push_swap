/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:04:35 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:04:41 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ilstdel(t_list **lst)
{
	t_list *temp;

	while (*lst)
	{
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
}

void	delete_all(char **arr, t_list **alst, t_list **b)
{
	ft_ilstdel(alst);
	ft_ilstdel(b);
	ft_arraydel(arr);
}
