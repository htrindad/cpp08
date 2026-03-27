NAME = Span
BONUS = SpanBonus
SRC = Span.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
BOBJ = $(SRC:.cpp=_bonus.o)
CPPFLAGS = -Wall -Werror -Wextra -O3 -std=c++98

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

%_bonus.o: %.cpp
	c++ $(CPPFLAGS) -D BONUS=1 -c $< -o $@

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

$(BONUS): $(BOBJ)
	c++ $(CPPFLAGS) $(BOBJ) -D BONUS=1 -o $(BONUS)

bonus: $(BONUS)

clean:
	rm -f $(OBJ)
	rm -f $(BOBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS)

re: fclean all
