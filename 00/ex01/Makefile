NAME = MyAwesomePhoneBook
MKDIR = mkdir

CC = c++

PATHS = .

BUILD_PATHS = $(PATHB) $(PATHO)

SRC	=	Contact.cpp \
		Phonebook.cpp

OBJS	=	$(SRC:.cpp=.o)

FLAGS	=	-Wall -Werror -Wextra #-fsanitize=address

HEADER	=	Contact.hpp \
			Phonebook.hpp

INCLUDES =-Iincludes -I

all: $(BUILD_PATHS) $(NAME)

$(PATHO)%.o:: $(PATHS)%.cpp
	@echo "Compiling ${notdir $<}			in	$(PATHS)"
	@$(CC) -c $(FLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Success"

clean:
	@echo "Cleaning"
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PRECIOUS: $(PATHO)%.o