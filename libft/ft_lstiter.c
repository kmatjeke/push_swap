/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 17:45:51 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/21 17:48:45 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_ilist *lst, void (*f)(t_ilist *elem))
{
	t_ilist	*current;

	current = lst;
	while (current != NULL)
	{
		f(current);
		current = current->next;
	}
}
