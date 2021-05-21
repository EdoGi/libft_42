SRCS	=	\
			ft_atoi.c	\
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			\
						
OBJS 	= 	${SRCS:.c=.o}
CC 		= 	gcc
RM		= 	rm -rf
NAME	= 	libft.a

CFLAGS	= 	-Wall -Wextra -Werror

HEADERS	=	./

.c.o : 	${SRCS}
			${CC} ${CFLAGS} -I ${HEADERS} -c $< -o $@

all	:		${NAME}

${NAME} :	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean :	
			${RM} ${OBJS}

fclean :	clean 
			${RM} ${NAME}

re :		fclean all

.PHONY :	all clean fclean re



