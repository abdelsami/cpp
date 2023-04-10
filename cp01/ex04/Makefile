# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 20:50:39 by kdoulyaz          #+#    #+#              #
#    Updated: 2022/11/28 20:50:40 by kdoulyaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--------------Makefile--------------#

NAME := sed

SRC := main.cpp sed.cpp

CPP := c++ -Werror -Wextra -Wall -g -std=c++98 -fsanitize=address

all : $(NAME)

$(NAME) : $(SRC)
		@$(CPP) $(SRC) -o $(NAME)

clean :
	@echo "Cleaning up..."

fclean :
	@rm -f $(NAME)

re : fclean all
