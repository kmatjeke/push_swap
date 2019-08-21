/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:25:18 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 15:42:26 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlist(t_list *list)
{
	while (list)
	{
		ft_putnbr(list->data);
		ft_putchar(' ');
		list = list->next;
	}
}

/*
int main(int ac, char **av)
{
	t_list *a;
	t_list *b;

	if (ac < 2)
		ft_putchar('\n');
	else
	{
		a = ft_arr_tolist(av + 1);
		b = ft_arr_tolist(av + 1);
		ft_sb(&b);
		ft_printlst(a);
		ft_putchar('\n');
		ft_printlst(b);
	}
	return (0);
}*/
