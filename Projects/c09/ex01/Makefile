HEADERDIR = ./includes
SRCSDIR = ./srcs/
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
NAME = libft.a
SRCS = ${addprefix ${SRCSDIR}, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c}
OBJS = ${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c -I ${HEADERDIR} $< -o ${<:.c=.o} 

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:	${NAME}

clean :
			rm -rf ${OBJS}

fclean: 	clean
			rm -rf ${NAME}

re:			fclean all 

.PHONY:		all re clean fclean
