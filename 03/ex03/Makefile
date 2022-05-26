NAME = NowItsWeird
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \
		main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp \
			DiamondTrap.hpp \
			color.hpp

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