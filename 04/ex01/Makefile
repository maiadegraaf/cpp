NAME = IDontWantToSetTheWorldOnFire
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	Animal.hpp \
			Cat.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp \
			Dog.hpp

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