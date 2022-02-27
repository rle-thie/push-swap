SRCS	= $(addprefix srcs/, main.c \
                            parsing/init_list.c)

OBJS	= ${SRCS:.c=.o}

NAME 	= push_swap

RM		= rm -f

CC		= cc

CFLAGS	= -Wall -Wextra -Werror -g3

all:		${NAME}

.c.o:
	        ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
