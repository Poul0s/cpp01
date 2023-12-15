CC	=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp

OBJ		=	$(addprefix obj/, $(SRC:.cpp=.o))

OBJ_DIR	=	$(sort $(dir $(OBJ)))

NAME	=	HiThisIsBrain

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o: %.cpp
	$(CC) $(CFLAGS) $^ -o $@ -c

$(OBJ_DIR):
	@mkdir -p $@

clean:
	rm -rf obj/

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
