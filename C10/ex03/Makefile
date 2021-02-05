SRCS		= main.c ft_putstr.c ft_strcmp.c ft_hexdump.c ft_hexdump2.c

OBJS		= ${SRCS:.c=.o}

NAME		= ./ft_hexdump

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

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
