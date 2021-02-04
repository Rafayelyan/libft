CC			:= 	gcc

CC_OPTS		:= 	#-Wall -Wextra -Werror

SRCS		:= 	$(shell find . \! -name 'ft_lst*.c' | grep "\.c")

BONUS_SRCS	:= 	$(shell find .  -name 'ft_lst*.c' | grep "\.c")

OBJS		:= 	${SRCS:.c=.o}

BONUS_OBJS	:= 	${BONUS_SRCS:.c=.o}

NAME 		:= 	myprog

RM			:= 	rm -f

all			:	toLib bonus  #compile

.c.o		:
				${CC}  ${CC_OPTS} -c $< -o ${<:.c=.o}

${NAME} 	: 
				$(CC) $(CC_OPTS) $(SRCS) 

clean 		: 
				${RM} ${OBJS}
				${RM} ${BONUS_OBJS}
				${RM} libft.a

fclean		:	
				${RM} ${NAME}

.PHONY		:	all clean fclean re

toLib		:
				${CC} -c ${SRCS}
				ar rc libft.a ${OBJS} 

bonus		:
				${CC} -c ${BONUS_SRCS}
				ar rc libft.a ${BONUS_OBJS} 

re			:	clean fclean toLib bonus #compile

compile		:
				${CC} ../source.c -L. -lft
