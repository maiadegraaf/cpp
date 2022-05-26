NAME = Polymorphism
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	

INCLUDES = -Iincludes -I

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	$(CC) $(INCLUDES) $(FLAGS) $(SRC) -o $(NAME)
	@echo "Success"

clean:
	@echo "Cleaning"
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PRECIOUS: $(PATHO)%.o