/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:28:37 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 16:28:40 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arraydel(char **arr)
{
	int i;

	i = 0;
	while (arr[i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_strdel(&arr[i]);
		i--;
	}
	free(arr);
	arr = NULL;
}
