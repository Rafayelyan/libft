CC		:= gcc

CC_OPTS	:= 

SRCS	:= $(wildcard *.c)

OBJS	:= ${SRCS:.c=.o}

NAME 	:= myprog

RM		:= rm -f

.c.o	:
			${CC}  ${CC_OPTS} -c $< -o ${<:.c=.o}

${NAME} : 
			$(CC) $(CC_OPTS) $(SRCS) 

all		:	


clean 	: 
			${RM} ${OBJS}
			${RM} libft.a

fclean	:	clean
			${RM} ${NAME}

.PHONY	:	all clean fclean re

toLib	:
			${CC} -c ${SRCS}
			ar rc libft.a ${OBJS} 
			${CC} ../source.c -L. -lft


re		:	clean  fclean toLib