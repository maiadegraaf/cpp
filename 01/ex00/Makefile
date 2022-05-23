NAME = BraiiiiiiinnnzzzZ
MKDIR = mkdir

CC = g++

PATHB = build/
PATHO = build/objs/
PATHS = .

BUILD_PATHS = $(PATHB) $(PATHO)

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
	@echo "Compiling ${notdir $<}			in	$(PATHS)"
	@$(CC) -c $(FLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Success"

$(PATHB):
	@$(MKDIR) $(PATHB)

$(PATHO):
	@$(MKDIR) $(PATHO)

clean:
	@echo "Cleaning"
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PRECIOUS: $(PATHO)%.o