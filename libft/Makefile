# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 04:47:36 by jvidon-n          #+#    #+#              #
#    Updated: 2022/07/14 00:05:57 by jvidon-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		 ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		 ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		 ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		 ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
		 ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		 ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
		 ft_tolower.c ft_toupper.c get_next_line.c ft_itoa_base.c \
		 ft_printf.c ft_print_hex.c ft_print_ptr.c ft_printf_utils.c \
		 ft_uitoa.c sub_libft.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c

CC = cc 
CFLAGS = -Wall -Wextra -Werror
OBJ = $(FILE:.c=.o)
OBJB = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

bonus: $(OBJB)
	ar -rc $(NAME) $(OBJB)

%.o: $(SRCS)/%.c
	$(CC) $(CFLAGS)-c $< -o $@
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re rebonus
