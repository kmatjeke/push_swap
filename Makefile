# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatjeke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/20 16:42:19 by kmatjeke          #+#    #+#              #
#    Updated: 2019/08/27 15:05:49 by kmatjeke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC = ft_arr_tolist.c ft_swapdata.c ft_sa.c ft_sb.c ft_ss.c ft_pushdata.c \
	  ft_pa.c ft_pb.c ft_rotatedata.c ft_ra.c ft_rb.c ft_rr.c \
	  ft_reverse_rotate.c ft_rra.c ft_rrb.c ft_rrr.c ft_is_rule.c \
	  ft_issorted.c ft_check_param.c ft_argv_checker.c ft_check_str.c \
	  checker.c ft_ilstsize.c ft_lstrev.c ft_ilstdel.c ft_calculations.c \
	  ft_six_or_smaller.c push_swap.c ft_printlist.c

OBJ = ft_arr_tolist.o ft_swapdata.o ft_sa.o ft_sb.o ft_ss.o ft_pushdata.o \
	  ft_pa.o ft_pb.o ft_rotatedata.o ft_ra.o ft_rb.o ft_rr.o \
      ft_reverse_rotate.o ft_rra.o ft_rrb.o ft_rrr.o ft_is_rule.o \
      ft_issorted.o ft_check_param.o ft_argv_checker.o ft_check_str.o \
	  checker.o ft_ilstsize.o ft_lstrev.o ft_ilstdel.o ft_calculations.o \
	  ft_six_or_smaller.o push_swap.o ft_printlist.o

all: $(NAME)

$(NAME):
	make -C libft
	gcc -Wall -Werror -Wextra $(SRC) -c -I push_swap.h
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	gcc -Wall -Werror -Wextra checker.c $(NAME) libft/libft.a -o checker
	gcc -Wall -Werror -Wextra push_swap.c $(NAME) libft/libft.a -o push_swap
	rm -f $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f checker

re: fclean all

.PHONY: all clean fclean 
