# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moerrais <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 22:16:30 by moerrais          #+#    #+#              #
#    Updated: 2025/10/20 22:16:32 by moerrais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror



BONUS = ft_lstnew.c


OBJ = $(SRC:.c=.o)
BONUS_OGJ = $(BONUS:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OGJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

run: all
	$(CC) = main.c $(NAME) -o main && ./main
	