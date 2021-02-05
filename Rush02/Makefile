SRCS	= main.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_strlen.c \
		  ft_check_number.c \
		  ft_parse_dict.c \
		  ft_parse_your_dict.c \
		  ft_split.c \
		  ft_print_nb.c \
		  ft_free_tab.c \
		  ft_init_list.c \
		  ft_create_elem_list.c \
		  ft_free_list.c \
		  ft_get_number_list.c \
		  ft_get_number_list2.c \
		  ft_itoa.c \
		  ft_strncmp.c \
		  ft_check_next.c

OBJS	= $(addprefix ./srcs/, ${SRCS:.c=.o})

NAME	= rush-02

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c -I./includes/ $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} -o $@ $^

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
