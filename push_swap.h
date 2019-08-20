/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:11:29 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/08/20 17:10:20 by kmatjeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

t_list				*ft_arr_tolist(char **arr);
void				ft_display(t_list *a, t_list *b);
void				ft_ilstdel(t_list **lst);
void				ft_swapdata(t_list **list);
void				ft_pushdata(t_list **src, t_list **dest);
void				ft_rotatedata(t_list **lst);
void				ft_reverse_rotate(t_list **list);
void				ft_sa(t_list **list);
void				ft_sb(t_list **list);
void				ft_ss(t_list **a, t_list **b);
void				ft_ra(t_list **list);
void				ft_rb(t_list **list);
void				ft_rr(t_list **a, t_list **b);
void				ft_pa(t_list **a, t_list **b);
void				ft_pb(t_list **a, t_list **b);
void				ft_rra(t_list **list);
void				ft_rrb(t_list **list);
void				ft_rrr(t_list **a, t_list **b);
size_t				ft_ilstsize(t_list *list);
int					ft_issorted(t_list *lst);
int					ft_check_str(char *str);
int					is_overflow(char *str);
int					ft_strisnum(char *str);
void				ft_arraydel(char **arr);
char				**get_rule(int i);
int					is_rule(char *av);
int					ft_checker(t_list **alst, t_list **b);
int					check_param(char **l_a);
void				delete_all(char **arr, t_list **alst, t_list **b);

#endif
