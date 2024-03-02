# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 14:17:06 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/29 16:19:37 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f *.o
fclean: clean 
	rm -rf $(NAME)
re: fclean all
