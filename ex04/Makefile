CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRC			=	replace.cpp \
				main.cpp \

OBJ			=	$(addprefix obj/, $(SRC:.cpp=.o))

OBJ_DIR		=	$(sort $(dir $(OBJ)))

SRCT		=	replace.cpp \
				test.cpp \

OBJT		=	$(addprefix obj/, $(SRCT:.cpp=.o))

OBJT_DIR	=	$(sort $(dir $(OBJT)))

HEADER		=	

NAME		=	replace

TESTER		=	replace_tester

all: $(NAME)

test: $(OBJT_DIR) $(OBJT)
	@$(CC) $(CFLAGS) $(OBJT) -o $(TESTER)
	@./$(TESTER)
	@rm -rf __test __test.replace

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(TESTER): 

obj/%.o: %.cpp
	$(CC) $(CFLAGS) $(HEADER) $^ -o $@ -c

$(sort $(OBJ_DIR) $(OBJT_DIR)):
	@mkdir -p $@

clean:
	rm -rf obj/

fclean: clean
	rm -rf $(NAME)
	rm -rf $(TESTER)

re: fclean all

.PHONY: all test clean fclean re
