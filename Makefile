# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfattah <hfattah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 16:41:43 by hfattah           #+#    #+#              #
#    Updated: 2024/08/08 12:54:43 by hfattah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror -g
LIBFTDIR = libft/
SRC_DIR = srcs/

SRC_1 = srcs/push_swap/push_swap.c \

SRC_2 =	srcs/push_swap/parsing.c \
		srcs/push_swap/solver_utils_ab.c \
		srcs/push_swap/solver_utils_ba.c \
		srcs/push_swap/ft_rotate_and_push.c \
		srcs/push_swap/operations_stack_a.c \
		srcs/push_swap/operations_stack_ab.c \
		srcs/push_swap/operations_stack_b.c \
		srcs/push_swap/ft_check.c \
		srcs/push_swap/ft_free.c \
		srcs/push_swap/list_operation.c\
		srcs/push_swap/find_place.c \
		srcs/push_swap/ft_sort_big.c \
		srcs/push_swap/ft_sort_three.c \
		srcs/push_swap/ft_rotate_type.c \
			

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

all: ${NAME}

clean:
	${RM} ${OBJ_1} ${OBJ_2}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re