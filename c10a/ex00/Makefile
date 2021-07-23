
SRCS 	= main.c fct.c

OBJS	= ${SRCS:.c=.o}//преобразует файлы из .с в .о

NAME	= hello

CC		= cc
RM		= rm -f

CFLAGS	= -Wall -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}// -o дает тому что скомпилировало имя -c Запустите все вышеперечисленное, а также ассемблер, создав целевой объектный файл ".o".

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean: 
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
