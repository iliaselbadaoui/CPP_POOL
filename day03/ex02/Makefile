compile = clang++ -Wall -Wextra -Werror
src = *.cpp
Name = ClapTrap

all: $(Name)

$(Name):
	@$(compile) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
fclean: clean

re: fclean all

.PHONY: all clean fclean re