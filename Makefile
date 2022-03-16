SRC_DIR	= 	src/

DEP_DIR	=	./

OBJ_DIR	=	bin/

BASE_DIR	=	base/

BONUS_DIR	=	bonus/

ADDON_DIR	=	addon/

BASE	= 	ft_atoi.c \
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
			ft_itoa.c \
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

ADDON	=	ft_putchar.c \

SRCS	=	$(addprefix $(BASE_DIR), $(BASE))
A_SRCS	=	$(addprefix $(ADDON_DIR), $(ADDON))
B_SRCS	=	$(addprefix $(BONUS_DIR), $(BONUS))

OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
B_OBJS	=	$(addprefix $(OBJ_DIR), $(B_SRCS:.c=.o))
A_OBJS	=	$(addprefix $(OBJ_DIR), $(A_SRCS:.c=.o))

NAME	=	libft.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -I$(DEP_DIR)

all:			$(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)$(BASE_DIR)
	mkdir -p $(OBJ_DIR)$(BONUS_DIR)
	mkdir -p $(OBJ_DIR)$(ADDON_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ_DIR) $(OBJS)
			ar rc $(NAME) $(OBJS)

bonus:			$(NAME) $(B_OBJS)
			ar rc $(NAME) $(B_OBJS)

addon:			$(bonus) $(A_OBJS)
			ar rc $(NAME) $(A_OBJS)

clean:
			rm -rf $(OBJ_DIR)

fclean:			clean
			rm -f libft.a

re:				fclean all


.PHONY:			all clean fclean re
