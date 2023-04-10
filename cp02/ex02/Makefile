# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdoulyaz <kdoulyaz <kdoulyaz@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 18:21:44 by kdoulyaz          #+#    #+#              #
#    Updated: 2022/12/04 22:37:31 by kdoulyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--------------Makefile--------------#

NAME := Fixed02

SRC := main.cpp Fixed.cpp

CPP := c++ -Werror -Wextra -Wall -g -std=c++98

all : $(NAME)

$(NAME) : $(SRC)
		@$(CPP) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all