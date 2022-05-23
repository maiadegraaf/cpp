NAME = Harl2.0
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	Harl.cpp \
		main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	Harl.hpp

INCLUDES = -Iincludes -I

all: $(NAME)

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