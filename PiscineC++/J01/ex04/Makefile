# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarbari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/10 15:30:58 by mbarbari          #+#    #+#              #
#    Updated: 2015/06/13 10:36:38 by mbarbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

CFLAGS += -Wall -Werror -Wextra

NAME = Brain

SRCS = ex04.cpp		\

OBJS = $(SRCS:%.cpp=%.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.cpp
	$(CXX) -c $(CPPFLAGS) $(CFLAGS) -I. -o $@ $<

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
