##
## EPITECH PROJECT, 2021
## B-CCP-400-BDX-4-1-theplazza-william.sautour
## File description:
## Makefile
##

CC		=	g++

DIR_SRC	=	src/

SRC		=	main.cpp								\
			Exception/Exception.cpp					\
			Reception/Reception.cpp					\
			Reception/ForMyPizza.cpp				\
			Reception/MyShell.cpp					\
			Kitchen/Kitchen.cpp						\
			Kitchen/Cooks.cpp						\
			IPC/IPC.cpp								\
			IPC/FromKitchen.cpp						\
			IPC/FromReception.cpp					\
			Pizza/Pizza.cpp							\
			Pizza/Americana.cpp						\
			Pizza/Fantasia.cpp						\
			Pizza/Regina.cpp						\
			Pizza/Margarita.cpp						\
			Ingredients/Ingredient.cpp				\
			Ingredients/ChiefLove.cpp				\
			Ingredients/Doe.cpp						\
			Ingredients/EggPlant.cpp				\
			Ingredients/GoatCheese.cpp				\
			Ingredients/Gruyere.cpp					\
			Ingredients/Ham.cpp						\
			Ingredients/Mushroom.cpp				\
			Ingredients/Steack.cpp					\
			Ingredients/Tomato.cpp

CFLAGS	=	-Werror -Wall -Wextra -lrt -pthread

CPPFLAGS	=	-I./include							\
				-I./include/Exception				\
				-I ./include/Kitchen				\
				-I ./include/Reception				\
				-I ./include/IPC					\
				-I ./include/Pizza					\
				-I ./include/Ingredients

OBJ		=	$(addprefix $(DIR_SRC), $(SRC:.cpp=.o))

NAME	=	plazza

$(NAME): 	$(OBJ)
			@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)

all:		$(NAME)

clean:
			@echo "Supprimer les .o ---> [\033[32mOK\033[0m]"
			@rm -f $(OBJ)

fclean:	clean
			@rm -f $(NAME)
			@echo "Supprimer le binaire ---> [\033[32mOK\033[0m]"

%.o:	%.cpp
			@echo -n "Compiling main scripts: $<"
			@$(CC)  $(CPPFLAGS) $(CFLAGS) -c $< -o $@ && echo -e "---> [\033[32mOK\033[0m]" || echo -e " [\033[31mKO\033[0m]"

re:	fclean all

.PHONY: all clean fclean re