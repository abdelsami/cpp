#--------------Makefile--------------#

NAME := Aanimal...

SRC := main.cpp Cat.cpp Dog.cpp Aanimal.cpp Brain.cpp 

CPP := c++ -Werror -Wextra -Wall -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		@$(CPP) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all