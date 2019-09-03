/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findmedian.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 13:15:23 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/03 13:26:07 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		*ft_stringlist(t_ilist *list)
{
	int		i;
	int		*string;
	t_ilist *temp;

	i = 0;
	temp = list;
	string = (int *)malloc(sizeof(int) * (ft_ilstsize(temp) + 1));
	temp = list;
	while (temp)
	{
		string[i++] = temp->data;
		temp = temp->next;
	}
	return (string);
}

static int		ft_mid(t_ilist *list, int *string, int num, int loop)
{
	int	i;

	i = 0;
	while (i < ((int)ft_ilstsize(list) * num / loop) - 1)
		i++;
	i = string[i];
	free(string);
	return (i);
}

int				ft_median(t_ilist *list, int num, int loop)
{
	int	i;
	int	*string;
	int	j;

	string = ft_stringlist(list);
	i = 0;
	while (i < (int)ft_ilstsize(list) - 1)
	{
		if (string[i] < string[i + 1])
			while (string[i] < string[i + 1])
				i++;
		else
		{
			j = 0;
			while (string[i + j] > string[i + j + 1] && \
					i + j < (int)ft_ilstsize(list) - 1)
			{
				ft_swap(&string[i + j], &string[i + j + 1]);
				j++;
			}
			i = 0;
		}
	}
	return (ft_mid(list, string, num, loop));
}
