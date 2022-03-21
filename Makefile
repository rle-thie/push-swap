# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/02 19:05:04 by rle-thie          #+#    #+#              #
#    Updated: 2022/03/21 17:31:15 by rle-thie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(addprefix srcs/, main.c \
					parsing/check_input.c parsing/check_input_utils.c \
					parsing/init_list.c parsing/sort_index.c \
					operation/swap.c operation/rotate.c \
					operation/push.c operation/reverse_rotate.c \
					sort/sort_utils.c sort/radix.c sort/sort_small.c)

OBJDIR = objs

OBJS = $(addprefix ${OBJDIR}/, ${SRCS:.c=.o})

NAME = push_swap

LIBFT = libft/libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJS}
			
			@make bonus -C libft
			${CC} ${OBJS} ${CFLAG} -o $@ ${LIBFT}

${OBJDIR}/%.o:%.c
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -c $< -o $@

clean:
		@make -C libft clean
		rm -rf ${OBJDIR}

fclean:		clean
			${RM} ${NAME}
			${RM} ${LIBFT}

re: fclean all

.PHONY: all clean fclean re