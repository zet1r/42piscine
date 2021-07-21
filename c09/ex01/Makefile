NAME = libft.a

RM = rm -f

CC = gcc

LIBC = ar rc

CFLAGS = -Wall -Wextra -Werror

HEADS = includes/

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${HEADS}

${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
