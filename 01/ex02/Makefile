NAME = BRAIN
MKDIR = mkdir

CC = c++

SRC	=	main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

all: $(NAME)

$(PATHO)%.o:: $(PATHS)%.cpp
	@echo "Compiling ${notdir $<}			in	$(PATHS)"
	@$(CC) -c $(FLAGS) $< -o $@

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Success"

clean:
	@echo "Cleaning"
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PRECIOUS: $(PATHO)%.o