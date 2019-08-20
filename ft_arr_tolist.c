/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_tolist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:30:53 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:24:42 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node(t_list **list, char *str)
{
	t_list	*node;
	t_list	*lst;

	lst = *list;
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return ;
	node->data = ft_atoi(str);
	node->next = NULL;
	while (lst->next)
		lst = lst->next;
	lst->next = node;
	node = NULL;
}

void	arr_tolist(t_list **list, char *str)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_strsplit(str, ' ');
	if (!*list)
	{
		if (!(*list = (t_list *)malloc(sizeof(t_list))) || !arr)
			return ;
		(*list)->data = ft_atoi(arr[i++]);
		(*list)->next = NULL;
	}
	while (arr[i])
		add_node(list, arr[i++]);
	ft_arraydel(arr);
}

t_list	*ft_arr_tolist(char **arr)
{
	t_list	*list;
	int		i;

	i = 0;
	if (!(list = (t_list *)malloc(sizeof(t_list))) || !arr)
		return (NULL);
	list->data = ft_atoi(arr[i++]);
	list->next = NULL;
	while (arr[i])
	{
		if (ft_words(arr[i]) > 1)
			arr_tolist(&list, arr[i]);
		else
			add_node(&list, arr[i]);
		i++;
	}
	return (list);
}
