# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 16:16:39 by apigeon           #+#    #+#              #
#    Updated: 2022/07/20 18:20:38 by apigeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###
CC		= cc
CFLAGS	= -Wall -Werror -Wextra

### EXECUTABLE ###
NAME	= libft.a

### INCLUDES ###
HEADER		= incl
SRC_DIR		= src
OBJ_DIR		= bin
BASE_DIR	= base
BONUS_DIR	= bonus
ADDON_DIR	= addon
PRINTF_DIR	= printf

### SOURCE FILES ###
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
			ft_substr.c

BONUS	=	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c

ADDON	=	ft_putchar.c \
			ft_putendl.c \
			ft_abs.c \
			ft_min.c \
			ft_max.c \
			get_next_line.c \
			get_next_line_utils.c

PRINTF	=	ft_printf.c \
			buffer_handler.c \
			option_char.c \
			option_hex.c \
			option_number.c \
			option_pointer.c \
			option_string.c

SRCS	=	$(addprefix $(BASE_DIR)/, $(BASE))
A_SRCS	=	$(addprefix $(ADDON_DIR)/, $(ADDON))
B_SRCS	=	$(addprefix $(BONUS_DIR)/, $(BONUS))
P_SRCS	=	$(addprefix $(PRINTF_DIR)/, $(PRINTF))

### OBJECTS ###
OBJS	=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
B_OBJS	=	$(addprefix $(OBJ_DIR)/, $(B_SRCS:.c=.o))
A_OBJS	=	$(addprefix $(OBJ_DIR)/, $(A_SRCS:.c=.o))
P_OBJS	=	$(addprefix $(OBJ_DIR)/, $(P_SRCS:.c=.o))

### COLORS ###
NOC		= \033[0m
BLACK	= \033[1;30m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m
PURPLE	= \033[1;35m
CYAN	= \033[1;36m
WHITE	= \033[1;37m

### RULES ###
all:	$(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)/$(BASE_DIR)
	@mkdir -p $(OBJ_DIR)/$(BONUS_DIR)
	@mkdir -p $(OBJ_DIR)/$(ADDON_DIR)
	@mkdir -p $(OBJ_DIR)/$(PRINTF_DIR)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I$(HEADER) -o $@ -c $<
#	@echo "libft: $(BLUE)Creating object file -> $(WHITE)$(notdir $@)... $(GREEN)[Done]$(NOC)"

$(NAME):	$(OBJ_DIR) $(OBJS) $(HEADER)/libft.h
	@ar rc $(NAME) $(OBJS)
	@echo "libft: $(GREEN)Successfully compiled$(NOC)"

bonus:	$(NAME) $(B_OBJS) $(HEADER)/libft.h
	@ar rc $(NAME) $(B_OBJS)
	@echo "libft: $(GREEN)Compiled with bonus$(NOC)"

addon:	bonus $(A_OBJS) $(P_OBJS) $(HEADER)/ft_printf.h $(HEADER)/get_next_line.h
	@ar rc $(NAME) $(A_OBJS) $(P_OBJS)
	@echo "libft: $(GREEN)Compiled with addons$(NOC)"

clean:
	@echo "libft: $(RED)Supressing object files$(NOC)"
	@rm -rf $(OBJ_DIR)

fclean:	clean
	@echo "libft: $(RED)Supressing lib file$(NOC)"
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
