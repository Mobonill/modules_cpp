NAME = materia
CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC = AMateria.cpp \
      Character.cpp \
	  Ice.cpp \
	  Cure.cpp \
      MateriaSource.cpp \
      main.cpp


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