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


NAME := ClapTrap
SRCS := main.cpp ClapTrap.cpp

CFLAGS := -Wall -Werror -Wextra -std=c++98

CC := c++

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

.cpp.o	:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
			@ $(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:	
	@rm -f $(OBJS)
	@echo "🧽 clean... 🧽"
	
fclean: clean
	@echo "🚮♻️ spring cleaning, rm $(NAME)... ♻️ 🚮" 
	rm -rf $(NAME)

re: fclean all

.SILENT:
