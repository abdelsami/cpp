
#-----------------Makefile-----------------#

NAME := PhoneBook

SRC := main.cpp Contact.cpp PhoneBook.cpp utils.cpp

CPP := c++ -Werror -Wextra -Wall -g -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		@$(CPP) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all