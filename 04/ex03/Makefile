NAME = InterfaceAndRecap
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp


OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	AMateria.hpp \
			Character.hpp \
			Cure.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			Ice.hpp \
			MateriaSource.hpp

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