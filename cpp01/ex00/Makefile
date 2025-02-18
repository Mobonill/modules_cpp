# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: morgane <morgane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 16:03:55 by mobonill          #+#    #+#              #
#    Updated: 2025/02/18 16:38:47 by morgane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies
CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		

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