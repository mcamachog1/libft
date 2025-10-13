# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 14:12:19 by macamach          #+#    #+#              #
#    Updated: 2025/10/09 17:48:47 by macamach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable name
NAME = libft.a

# Compiler command
CC = cc

# Standard and warning flags
CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = $(wildcard srcs/*.c)

# Object files
OBJS = $(SRCS:.c:.o)

# Header directory for includes
INCLUDES = -I includes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Phony targets prevent conflicts with files that might have the same name
.PHONY: all clean fclean re
