# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iragusa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 16:16:40 by iragusa           #+#    #+#              #
#    Updated: 2023/08/05 16:16:50 by iragusa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

SRCS := megaphone.cpp

OBJS := $(SRCS:.cpp=.o)

INC := 

CFLAGS := -Wall -Werror -Wextra
CC := c++

STD := -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	@ $(CC) $(CFLAGS) $(STD) -c -o $@ $<

clean:	
	@rm -rf megaphone.o
	@echo "🧽 clean... 🧽"
	
fclean: clean
	@echo "🚮♻️ spring cleaning, rm $(NAME)... ♻️ 🚮" 
	rm -rf $(NAME)

re: fclean all

.SILENT:
