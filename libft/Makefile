# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jromagna <jromagna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 15:50:50 by jromagna          #+#    #+#              #
#    Updated: 2016/11/08 19:24:07 by jromagna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = src

SRC_NAME = ft_isdigit.c \
	  ft_strchr.c \
	  ft_strncmp.c \
	  ft_toupper.c \
	  ft_isprint.c \
	  ft_isblank.c \
	  ft_strcmp.c \
	  ft_strncpy.c \
	  ft_putchar.c \
	  ft_strcpy.c \
	  ft_strnstr.c \
	  ft_isalnum.c \
	  ft_putnbr.c \
	  ft_strdup.c \
	  ft_strrchr.c \
	  ft_isalpha.c \
  	  ft_putstr.c \
	  ft_strlen.c \
	  ft_strstr.c \
	  ft_isblank.c \
	  ft_isascii.c \
	  ft_strcat.c\
  	  ft_strncat.c \
	  ft_tolower.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_atoi.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strclr.c \
	  ft_strdel.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strtrim.c \
	  ft_strjoin.c \
	  ft_strsub.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_strsplit.c \
	  ft_strlcat.c \
	  ft_putendl.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_putendl_fd.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_tabswap.c \
	  get_next_line.c \
	  ft_error.c


OBJ_PATH = obj

CCASM = nasm
CPPFLAGS = -Iinclude
LDFLAGS = 
LDLIBS = 

LCC = ar rc
CC = clang
CFLAGS = -Wall -Wextra -Werror -O2

OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.s
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CCASM) $(CPPFLAGS) -o $@ -c $<

#$(NAME): $(OBJ)
#	$(CC) $(LDFLAGS) $(LDLIBS) $(OBJ) -o $(NAME)

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h



clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

