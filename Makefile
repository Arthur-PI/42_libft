SRC_DIR	= src/

DEP_DIR	= include/

OBJ_DIR	= bin/

SRCS	= ft_putchar.c ft_putstr.c ft_strlen.c ft_putnbr.c

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
