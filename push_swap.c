/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:38:15 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/03 14:56:55 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_push_swap(t_list **list, t_list **b)
{
	int	len;

	len = ft_ilstsize(*list);
	if (ft_issorted(*list) || !*list)
		return ;
	else
	{
		if (len <= 6)
			ft_six_or_smaller(list, b);
		else if (len > 6 && len <= 100)
		{
			ft_sort_100(list, b);
		}	
	}
}

static void	finish(t_list **list, t_list **b)
{
	if (ft_issorted(*list) && !*b)
	{
		ft_ilstdel(list);
		return ;
	}
	ft_push_swap(list, b);
	/*ft_ilstdel(list);
	ft_ilstdel(b);*/
}

int			main(int argc, char **argv)
{
	t_list	*list;
	t_list	*b;

	if (argc >= 2)
	{
		if (argc > 2)
			if (!check_param(argv + 1))
				return (0);
			else
				list = ft_arr_tolist(argv + 1);
		else
		{
			argv = ft_strsplit(argv[1], ' ');
			if (!check_param(argv))
			{
				ft_arraydel(argv);
				return (0);
			}
			list = ft_arr_tolist(argv);
			ft_arraydel(argv);
		}
		finish(&list, &b);
		ft_printlist(list);
		ft_putchar('\n');
		ft_printlist(b);
	}
	return (0);
}
