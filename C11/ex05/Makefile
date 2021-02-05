SRCS	=	ft_putnbr.c ft_atoi.c ft_operate_it.c ft_select_op.c main.c

OBJS	=	 ${SRCS:.c=.o}

NAME	=	./do-op

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} -o $@ $^

all: 		${NAME}

clean:
		rm -f ${OBJS}

fclean: 	clean
		rm -f ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
