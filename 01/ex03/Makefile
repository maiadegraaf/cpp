NAME = UnnecessaryViolence
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp \
		main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp

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