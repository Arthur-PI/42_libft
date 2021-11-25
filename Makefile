SRC_DIR	= 	src/

DEP_DIR	= 	include/

OBJ_DIR	= 	bin/

PART1_DIR	=	part1/

PART2_DIR	=	part2/

BONUS_DIR	=	bonus/

OTHER_DIR	=	other/

EXTRA_DIR	=	extra/

PART1	= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
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

PART2	=	ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \

BONUS	=	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \

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
			ft_strtrim.c \


EXTRA	=	ft_contains.c \
			ft_islower.c \
			ft_isspace.c \
			ft_isupper.c \
			ft_strcat.c \
			ft_strndup.c \

SRCS	=	$(addprefix $(PART1_DIR), $(PART1)) \
			$(addprefix $(PART2_DIR), $(PART2)) \
			$(addprefix $(BONUS_DIR), $(BONUS)) \


OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

NAME	= libft.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -I$(DEP_DIR)

all:			$(NAME)

$(OBJ_DIR):
			mkdir -p $@/{$(PART1_DIR),$(PART2_DIR),$(BONUS_DIR)}

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
			$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ_DIR) $(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)


test:			$(NAME)
			$(CC) $(CFLAGS) -fsanitize=address -L. -lft -o test_all main.c

clean:
			rm -rf bin/

fclean:			clean
			rm -rf libft.a
			@rm -rf test_all

re:				fclean all


.PHONY:			all clean fclean re
