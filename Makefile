NAME =		bsq 		
FILES =		
SRC_PATH = ./srcs/
INC_PATH = ./includes/
SRC = 		$(addprefix ${SRC_PATH},${FILES})
CC = 		gcc
OBJ = 		${SRC:.c=.o}
FLAGS = 	-Wall -Wextra -Werror
RM = 		rm -f

all: 		${NAME}

${NAME}: 	${OBJ}
			${CC} ${FLAGS} -o ${NAME} ${OBJ}

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC_PATH}
clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
