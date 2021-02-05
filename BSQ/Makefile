SRCS	=	main.c \
			ft_parse_tab.c \
			ft_struct.c ft_split.c \
			ft_read_file.c \
			ft_read_stdin.c \
			ft_atoi.c \
			ft_check_tab.c

OBJS	=	$(addprefix ./srcs/, ${SRCS:.c=.o})

NAME	=	bsq

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c -I./includes/ $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}
all: 		${NAME}

clean:
		rm -f ${OBJS}

fclean: 	clean
		rm -f ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
