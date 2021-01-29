CC		:= gcc

CC_OPTS	:= #-Wall -Wextra -Werror

SRCS	:= $(wildcard *.c)

OBJS	:= ${SRCS:.c=.o}

NAME 	:= myprog

RM		:= rm -f

.c.o	:
			${CC}  ${CC_OPTS} -c $< -o ${<:.c=.o}

${NAME} : 
			$(CC) $(CC_OPTS) $(SRCS) 

clean 	: 
			${RM} ${OBJS}
			${RM} libft.a

fclean	:
			${RM} ${NAME}

.PHONY	:	all clean fclean re

toLib	:
			${CC} -c ${SRCS}
			ar rc libft.a ${OBJS} 
			${CC} ../source.c -L. -lft

all		:	toLib

re		:	clean fclean toLib
