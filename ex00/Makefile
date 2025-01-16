# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/13 13:13:00 by cesasanc          #+#    #+#              #
#    Updated: 2025/01/16 17:35:39 by cesasanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

OBJS = $(SRCS:.cpp=.o)

CFLAGS	=	-Wall -Wextra -Werror -std=c++11

%.o: %.cpp
	@c++ ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@c++ ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re
