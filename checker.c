/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:37:18 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 10:51:07 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char		**stack_malloc(char *str)
{
	char **arr;

	if (!(arr = (char **)malloc(sizeof(char*) * 2)))
		return (NULL);
	arr[0] = ft_strdup(str);
	arr[1] = NULL;
	return (arr);
}

void		ft_display(t_list *a, t_list *b)
{
	if (ft_issorted(a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

char		**get_rule(int i)
{
	char	*line;
	char	**arr;

	i = 0;
	arr = NULL;
	while (get_next_line(0, &line) == 1 && ++i)
	{
		if (!ft_is_rule(line))
		{
			ft_strdel(&line);
			if (arr)
				ft_arraydel(arr);
			return (stack_malloc("Error"));
		}
		else if (ft_is_rule(line) && arr == NULL)
		{
			arr = stack_malloc(line);
			ft_strdel(&line);
		}
		else if (ft_is_rule(line) && arr != NULL)
			arr = ft_array_join(arr, line);
	}
	if (i == 0)
		return (stack_malloc("invalid"));
	return (arr);
}

int			main(int ac, char **av)
{
	t_list	*lst;
	t_list	*b;

	if (ac >= 2)
	{
		if (ac > 2)
			if (!check_param(av + 1))
				return (0);
			else
				lst = ft_arr_tolist(av + 1);
		else
		{
			av = ft_strsplit(av[1], ' ');
			if (!check_param(av))
			{
				ft_arraydel(av);
				return (0);
			}
			lst = ft_arr_tolist(av);
			ft_arraydel(av);
		}
		return (ft_argv_checker(&lst, &b));
	}
	else
		return (0);
}
