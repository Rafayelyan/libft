CC			:= 	gcc

CC_OPTS		:= 	#-Wall -Wextra -Werror

SRCS		:= 	$(shell find . \! -name 'ft_lst*.c' | grep "\.c")

BONUS_SRCS	:= 	$(shell find .  -name 'ft_lst*.c' | grep "\.c")

OBJS		:= 	${SRCS:.c=.o}

BONUS_OBJS	:= 	${BONUS_SRCS:.c=.o}

NAME 		=	libft.a

RM			:= 	rm -f

all			:	$(NAME) bonus  #compile

.c.o		:
				${CC}  ${CC_OPTS} -c $< -o ${<:.c=.o}

clean 		: 
				${RM} ${OBJS}
				${RM} ${BONUS_OBJS}

fclean		:	clean	
				${RM} ${NAME}

.PHONY		:	all clean fclean re

$(NAME)		:
				${CC} -c ${SRCS}
				ar rc $(NAME) ${OBJS} 

bonus		:
				${CC} -c ${BONUS_SRCS}
				ar rc $(NAME) ${BONUS_OBJS} 

re			:	fclean $(NAME) bonus #compile

compile		:
				${CC} ../source.c -L. -lft
