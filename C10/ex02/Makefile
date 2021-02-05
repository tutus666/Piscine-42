SRCS		= main.c \
			  ft_putstr.c \
			  ft_strcmp.c \
			  ft_is_numeric.c \
			  ft_atoi.c \
			  ft_tail.c \
			  ft_readstdin.c

OBJS		= ${SRCS:.c=.o}

NAME		= ./ft_tail

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
