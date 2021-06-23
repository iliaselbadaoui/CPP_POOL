compile = clang++ -Werror -Wextra -Wall
src = *.cpp
Name = Zombie

all : $(Name)

$(Name):
	@$(compile) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
fclean: clean

re: fclean all

.PHONY: all clean fclean re