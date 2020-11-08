NAME		= libft.a
FILES		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c  ft_itoa.c ft_memccpy.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strrev_bonus.c \
ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strrchr.c
FILES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
SRC_PATH	= ./srcs/
INC_PATH	= ./includes/
SRC			= $(addprefix ${SRC_PATH},${FILES})
SRC_BONUS	= $(addprefix ${SRC_PATH},${FILES_BONUS})
MAIN		= $(addprefix ${SRC_PATH},main.c)
CC			= gcc
OBJS 		= ${SRC:.c=.o}
OBJS_BONUS	= ${SRC_BONUS:.c=.o}
FLAGS		= -Wall -Wextra -Werror
RM			= rm -f
AR			= ar rc

all: 		${OBJS} ${OBJS_BONUS}
			${AR} ${NAME} ${OBJS} ${OBJS_BONUS}
			ranlib ${NAME}
			${CC} ${FLAGS} ${MAIN} ${NAME} # LIGNE A ENLEVER

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INC_PATH}

${NAME}:	${OBJS} 
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus: 		${OBJS_BONUS}
			${AR} ${NAME} ${OBJS_BONUS}
			ranlib ${NAME}

.PHONY: all clean fclean re
