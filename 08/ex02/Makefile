NAME = Mutation
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	main.cpp 

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-std=c++98 -Wall -Werror -Wextra #-fsanitize=address

HEADER	=	MutantStack.hpp

INCLUDES = -Iincludes -I

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(INCLUDES) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Success"

clean:
	@echo "Cleaning"
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PRECIOUS: $(PATHO)%.o