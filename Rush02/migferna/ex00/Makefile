NAME	= rush-02

SRCS	= main.c utilities_dict.c utilities_str.c  error_control.c ft_twodigits.c ft_threedigits.c

OBJS	= ${SRCS:.c=.o}

CC	= cc
RM	= rm -rf

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
