#--------------Makefile--------------#

NAME := AMateria...

SRC := AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

CPP := c++ -Werror -Wextra -Wall  -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		@$(CPP) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all
