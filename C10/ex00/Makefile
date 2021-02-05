SRCS	= main.c ft_readfile.c ft_putstr.c ft_putchar.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
