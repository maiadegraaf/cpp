NAME = SedIsForLosers
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	CpFile.cpp \
		main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	CpFile.hpp

INCLUDES = -Iincludes -I

all: $(NAME)

$(PATHO)%.o: $(PATHS)%.cpp $(HEADER)
	@echo "Compiling ${notdir $<}			in	$(PATHS)"
	@$(CC) -c $(FLAGS) $(INCLUDES) $< -o $@

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