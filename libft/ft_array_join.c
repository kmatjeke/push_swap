/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:28:11 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 16:28:19 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_array_join(char **arr, char *str)
{
	int		i;
	char	**new;

	i = 0;
	while (arr[i])
		i++;
	new = (char **)malloc(sizeof(char*) * (i + 2));
	i = -1;
	while (arr[++i])
		new[i] = ft_strdup(arr[i]);
	new[i++] = ft_strdup(str);
	new[i] = NULL;
	ft_arraydel(arr);
	ft_strdel(&str);
	return (new);
}
