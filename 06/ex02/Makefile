NAME = RealTypeIdentifier
MKDIR = mkdir

CC = c++

PATHS = .

SRC	=	main.cpp \
		Base.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	A.hpp \
			B.hpp \
			Base.hpp \
			C.hpp

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