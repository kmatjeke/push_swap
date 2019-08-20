/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 17:14:43 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/06/21 17:21:20 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_ilist **alst, void (*del)(void *, size_t))
{
	t_ilist	*next;
	t_ilist	*current;

	next = *alst;
	while (next != NULL)
	{
		current = next;
		del(current->content, current->content_size);
		next = current->next;
		free(current);
	}
	*alst = NULL;
}
