NAME = MyAwesomePhoneBook
MKDIR = mkdir

CC = g++

PATHB = build/
PATHO = build/objs/
PATHS = .

BUILD_PATHS = $(PATHB) $(PATHO)

SRC	=	Contact.cpp \
		Phonebook.cpp

OBJS	=	$(addprefix $(PATHO), $(notdir $(patsubst %.cpp, %.o, $(src))))

FLAGS	=	-Wall -Werror -Wextra -g #-fsanitize=address

HEADER	=	Contact.hpp \
			Phonebook.hpp

INCLUDES =-Iincludes -I

all: $(BUILD_PATHS) $(NAME)

$(PATHO)%.o:: $(PATHS)%.cpp
	@echo "Compiling ${notdir $<}			in	$(PATHS)"
	@$(CC) -c $(FLAGS) $(INCLUDES) $< -o $@

	@echo "Success"

$(NAME): $(SRC) $(HEADERS)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

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