# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: morgane <morgane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 18:36:25 by morgane           #+#    #+#              #
#    Updated: 2025/02/19 15:34:25 by morgane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@