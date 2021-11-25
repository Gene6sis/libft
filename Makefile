SRCS	=	ft_atoi.c				\
			ft_isascii.c 			\
			ft_memcpy.c  			\
			ft_strcmp.c  			\
			ft_strlcpy.c 			\
			ft_strtrim.c			\
			ft_bzero.c  			\
			ft_isdigit.c			\
			ft_memmove.c			\
			ft_strdup.c 			\
			ft_strlen.c 			\
			ft_substr.c				\
			ft_calloc.c				\
			ft_isprint.c 			\
			ft_memset.c  			\
			ft_striter.c 			\
			ft_strncmp.c 			\
			ft_tolower.c			\
			ft_isalnum.c 			\
			ft_memchr.c  			\
			ft_strchr.c  			\
			ft_strjoin.c 			\
			ft_strnstr.c 			\
			ft_toupper.c 			\
			ft_isalpha.c 			\
			ft_memcmp.c  			\
			ft_strclr.c  			\
			ft_strlcat.c 			\
			ft_strrchr.c

SRCSBONUS =	ft_lstadd_back.c		\
			ft_lstadd_front.c		\
			ft_lstclear.c			\
			ft_lstdelone.c			\
			ft_lstiter.c			\
			ft_lstlast.c			\
			ft_lstmap.c				\
			ft_lstnew.c				\
			ft_lstsize.c

OBJS	= 	${SRCS:.c=.o}

OBJSBON	= 	${SRCSBONUS:.c=.o}

NAME	= 	libft.a

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar -rcs $(NAME) $(OBJS)

all:		${NAME}

clean:
			${RM} ${OBJSBON} ${OBJS}

fclean:		clean
			${RM} ${NAME} 

bonus:		${OBJSBON}
			ar -rcs $(NAME) ${OBJSBON} ${OBJS}

re:			fclean all

#
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
#	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:		bonus all clean fclean re