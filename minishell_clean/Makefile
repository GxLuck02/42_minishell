# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttreichl <ttreichl@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 02:11:07 by ttreichl          #+#    #+#              #
#    Updated: 2024/05/23 03:03:41 by ttreichl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= minishell

# Directories
SRCDIR  = Srcs
LIBFTDIR= libft
INCDIR  = Srcs/Includes

# Source files
SRCS    = $(SRCDIR)/main.c $(SRCDIR)/Prompt/prompt.c
OBJS    = $(SRCS:.c=.o)

# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I$(INCDIR)

# Libraries
LIBFT   = $(LIBFTDIR)/libft.a
LIBS    = -L$(LIBFTDIR) -lft -lreadline

# Colors
YELLOW  = \033[33m
GREEN   = \033[32m
RED     = \033[31m
RESET   = \033[0m

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	
all: $(NAME)


$(NAME): $(OBJS)
	@echo "$(YELLOW)----Compiling minishell----$(RESET)"
	@make re -C ./libft
	@$(CC) $(OBJS) $(LIBS) -o $(NAME)
	@echo "$(GREEN)Minishell Compiled! ᕦ($(RED)♥$(GREEN)_$(RED)♥$(GREEN))ᕤ$(RESET)\n"

clean:
	@make clean -C ./libft
	@rm -f $(OBJS)

fclean: clean
	@make fclean -C ./libft
	@rm -f $(NAME)
	@echo "\n\033[31mDeleting EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

re: fclean all

.PHONY: all clean fclean re
