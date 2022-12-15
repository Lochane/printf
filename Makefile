# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsouquie <lsouquie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 11:41:52 by lsouquie          #+#    #+#              #
#    Updated: 2022/12/12 18:16:04 by lsouquie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putnbr_fd \
		ft_make_this_p \
	

OBJ = $(addsuffix .o, ${SRC})
CC = cc 
HEADER = .
FLAGS = -Wall -Werror -Wextra -g3
	
all: $(NAME)

%.o:%.c
	$(CC) -c $(FLAGS) $< -o $@ -I${HEADER}

$(NAME): ${OBJ}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}
		
clean:
		rm -f ${OBJ}
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re