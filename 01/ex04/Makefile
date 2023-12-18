# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iragusa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 19:57:31 by iragusa           #+#    #+#              #
#    Updated: 2023/08/23 19:57:37 by iragusa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME := Loser
SRCS := main.cpp 

CFLAGS := -Wall -Werror -Wextra

CC := c++

STD := -std=c++98

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

.cpp.o	:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
			@ $(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)

clean:	
	@rm -f $(OBJS)
	@echo "🧽 clean... 🧽"
	
fclean: clean
	@echo "🚮♻️ spring cleaning, rm $(NAME)... ♻️ 🚮" 
	rm -rf $(NAME)

re: fclean all

.SILENT:
