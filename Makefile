# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 19:14:21 by ajeffers          #+#    #+#              #
#    Updated: 2025/10/20 19:16:26 by ajeffers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -fr

SRC = ft_printf_char.c \
ft_printf_str.c \
ft_printf_num.c \
ft_printf_pt.c \
ft_printf_undec.c \
ft_printf_hex.c \
ft_printf.c

OSRC = $(SRC:.c=.o)
TARGET = libftprintf.a

all: $(TARGET)

$(TARGET): $(OSRC)
		$(AR) $(TARGET) $(OSRC)

clean:
		rm -f $(OSRC)

fclean: clean
		rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
