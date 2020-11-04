NAME = libft.a
FILES =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c ft_itoa.c ft_memcpy.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strrchr.c
SRC_PATH = ./srcs/
INC_PATH = ./includes/
SRC = 		$(addprefix ${SRC_PATH},${FILES})
CC = 		gcc
OBJS = 		${SRC:.c=.o}
FLAGS = 	-Wall -Wextra -Werror
RM = 		rm -f
AR =		ar rc

all: 		${NAME}

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC_PATH}

${NAME}:	${OBJS} 
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
