/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:11:29 by kmatjeke          #+#    #+#             */
/*   Updated: 2019/09/17 11:23:05 by kmatjeke         ###   ########.fr       */
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
void				ft_swapdata(t_list **list);
void				ft_sa(t_list **list);
void				ft_sb(t_list **list);
void				ft_ss(t_list **a, t_list **b);
void				ft_pushdata(t_list **src, t_list **dest);
void				ft_pa(t_list **a, t_list **b);
void				ft_pb(t_list **a, t_list **b);
void				ft_rotatedata(t_list **lst);
void				ft_ra(t_list **list);
void				ft_rb(t_list **list);
void				ft_rr(t_list **a, t_list **b);
void				ft_reverse_rotate(t_list **list);
void				ft_rra(t_list **list);
void				ft_rrb(t_list **list);
void				ft_rrr(t_list **a, t_list **b);
void				ft_arraydel(char **arr);
void				delete_all(char **arr, t_list **alst, t_list **b);
void				ft_display(t_list *a, t_list *b);
void				ft_ilstdel(t_list **lst);
void				ft_printlist(t_list *list);
size_t				ft_ilstsize(t_list *list);
int					ft_issorted(t_list *lst);
int					ft_check_str(char *str);
int					is_overflow(char *str);
int					ft_isnum(char *str);
char				**get_rule(int i);
int					ft_is_rule(char *av);
int					ft_argv_checker(t_list **alst, t_list **b);
int					check_param(char **av);
int					min_value(t_list *list);
int					max_value(t_list *list);
int					min_pos(t_list *list, int min);
void				ft_six_or_smaller(t_list **list, t_list **b);
int					ft_median(t_list *list, int num, int loop);
void				ft_push_swap(t_list **list, t_list **b);
int					ft_pos(t_list *list, int min, int n_min, int p);
void				p_sort_3(t_list **a, t_list **b);
void				sort(t_list **stacka, t_list **stackb);
void				ft_sort_100(t_list **a, t_list **b);
void				ft_sort_500(t_list **a, t_list **b);
void				reverse_sort(t_list **stacka, t_list **stackb);
typedef struct		s_point
{
	int				even;
	int				min;
	int				n_min;
	int				pos;
}					t_point;

#endif
