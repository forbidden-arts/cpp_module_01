# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 11:21:54 by dpalmer           #+#    #+#              #
#    Updated: 2023/10/05 12:51:30 by dpalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 #-fsanitize=thread

# Colors

C_RESET = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93mmkd
BLUE = \033[0;94m
B_MAGENTA = \033[1;35m
CYAN = \033[0;96m

#Sources

SRC_FILES	=	main		\
				newZombie	\
				randomChump	\
				Zombie

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(ADDON)
			@echo "$(B_MAGENTA)$(NAME) compiled successfully$(C_RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
			@mkdir -p $(OBJ_DIR)
			@echo "$(GREEN)Compiling: $(BLUE)$<$(C_RESET)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $

clean:
			@rm -f $(OBJ)
			@echo "$(BLUE)$(NAME) objects deleted.$(C_RESET)"


fclean:		clean
			@rm -f $(NAME)
			@echo "$(CYAN)$(NAME) executable deleted.$(C_RESET)"

re:			fclean all

.PHONY:		all clean fclean re
