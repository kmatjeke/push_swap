/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:53:20 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/21 15:16:13 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find(char **arr, char *to_find, int pos)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (ft_strcmp(arr[i], to_find) == 0 && i != pos)
			return (1);
		i++;
	}
	return (0);
}

int		ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((i != 0 && str[i] == '-'))
			return (0);
		if (str[0] != '-' && !ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_overflow(char *str)
{
	int		len;
	char	*maximum;
	char	*minimum;

	len = ft_strlen(str);
	minimum = "2147483648";
	maximum = "2147483647";
	str = (len == 11 && *str == '-') ? str + 1 : str;
	while (*str && len >= 10)
	{
		if (len == 10)
		{
			if (ft_strncmp(str, maximum, 1) > 0)
				return (1);
			maximum++;
		}
		else
		{
			if (ft_strncmp(str, minimum, 1) > 0)
				return (1);
			minimum++;
		}
		str++;
	}
	return (0);
}

int		param(char *str)
{
	int		i;
	char	**lst;

	lst = ft_strsplit(str, ' ');
	i = 0;
	while (lst[i])
	{
		if (!ft_check_str(lst[i]))
			return (0);
		if (find(lst, lst[i], i))
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	ft_arraydel(lst);
	return (1);
}

int		check_param(char **av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (ft_words(av[i]) > 1)
		{
			if (!param(av[i++]))
				return (0);
		}
		else
		{
			if (!ft_check_str(av[i]))
				return (0);
			if (find(av, av[i], i))
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			i++;
		}
	}
	return (1);
}
