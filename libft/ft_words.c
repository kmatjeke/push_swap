/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:41:53 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/07/09 11:42:28 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

size_t		ft_words(const char *str)
{
	size_t i;
	size_t words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (check(str[i]))
			i++;
		else
		{
			if (str[i] != '\0')
				words++;
			while (!check(str[i]) && str[i])
				i++;
		}
	}
	return (words);
}
