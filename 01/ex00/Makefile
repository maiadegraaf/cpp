NAME = BraiiiiiiinnnzzzZ
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	Zombie.hpp

INCLUDES = -Iincludes -I

all: $(BUILD_PATHS) $(NAME)

$(PATHO)%.o:: $(PATHS)%.cpp
	@echo "Compiling ${notdir $<}"
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