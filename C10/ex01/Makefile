SRCS	=	main.c ft_putchar.c ft_readfile.c

OBJS	=	 ${SRCS:.c=.o}

NAME	=	./ft_cat

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
