NAME = Span
BONUS = SpanBonus
SRC = Span.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CPPFLAGS = -Wall -Werror -Wextra -O3 -std=c++98

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

$(BONUS): $(OBJ)
	c++ $(CPPFLAGS) -D BONUS=1 -o $(BONUS)

bonus: $(BONUS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS)

re: fclean all

