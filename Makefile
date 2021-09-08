SRC_DIR	= 	src/

DEP_DIR	= 	include/

OBJ_DIR	= 	bin/

SRCS	= 	ft_atoi.c \
			ft_contains.c \
			ft_isalpha.c \
			ft_islower.c \
			ft_isnum.c \
			ft_isupper.c \
			ft_itoa.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_split.c \
			ft_strcat.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strisalnum.c \
			ft_strisalpha.c \
			ft_strisnum.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strndup.c \
			ft_strstr.c

OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I$(DEP_DIR)

all:			$(NAME)


$(OBJ_DIR):
			@mkdir -p $@

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
			$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ_DIR) $(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			rm -rf bin/

fclean:			clean
			rm -rf libft.a

re:				fclean all


.PHONY:			all clean fclean re
