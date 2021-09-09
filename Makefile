SRC_DIR	= 	src/

DEP_DIR	= 	include/

OBJ_DIR	= 	bin/

LIBC_DIR	=	libc/

OTHER_DIR	=	other/

BONUS_DIR	=	bonus/

EXTRA_DIR	=	extra/

LIBC	= 	ft_atoi.c \
			ft_bzero.c \
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
			ft_strcat.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_strcpy.c	\
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_tolower.c \
			ft_toupper.c

OTHER	=	ft_itoa.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strclr.c \
			ft_strdel.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strsplit.c \
			ft_strsub.c \
			ft_strtrim.c

BONUS	=	ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c

EXTRA	=	ft_contains.c \
			ft_islower.c \
			ft_isupper.c \
			ft_isspace.c \
			ft_strndup.c

SRCS	=	$(addprefix $(LIBC_DIR), $(LIBC)) \
			$(addprefix $(OTHER_DIR), $(OTHER)) \
			$(addprefix $(BONUS_DIR), $(BONUS)) \
			$(addprefix $(EXTRA_DIR), $(EXTRA))

OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I$(DEP_DIR)

all:			$(NAME)


$(OBJ_DIR):
			@mkdir -p $@/{$(LIBC_DIR),$(OTHER_DIR),$(BONUS_DIR),$(EXTRA_DIR)}

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
			$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ_DIR) $(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

test:			$(NAME)
			$(CC) $(CFLAGS) -L. -lft -o test_all main.c

clean:
			rm -rf bin/

fclean:			clean
			rm -rf libft.a
			@rm -f test_all

re:				fclean all


.PHONY:			all clean fclean re
