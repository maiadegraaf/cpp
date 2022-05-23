NAME = megaphone
MKDIR = mkdir

CC = c++

PATHS = .

BUILD_PATHS = $(PATHB) $(PATHO)

SRC	=	megaphone.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra -g #-fsanitize=address

HEADER	=	megaphone.hpp

INCLUDES =-Iincludes -I

all: $(BUILD_PATHS) $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Success"

test: all
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

clean:
	@echo "Cleaning"
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PRECIOUS: $(PATHO)%.o