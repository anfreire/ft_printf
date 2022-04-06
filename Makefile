# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 21:29:08 by anfreire          #+#    #+#              #
#    Updated: 2022/04/05 23:30:50 by anfreire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  ft_printf.c \
		utils1.c \
		utils2.c \
		utils3.c \

SURPL_O = ft_printf.o \
		utils1.o \
		utils2.o \
		utils3.o \

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all