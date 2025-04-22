SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = $(addprefix srcs/, ${SRC})
OBJS = ${SRCS:.c=.o}
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

all : ${NAME}

${NAME} : ${OBJS}
	ar -rcs ${NAME} ${OBJS}
${OBJS} :
	${CC} ${FLAGS} -c -I./includes ${@:.o=.c} -o $@
clean :
	rm -f ${OBJS}
fclean : clean
	rm -f ${NAME}
re : fclean all