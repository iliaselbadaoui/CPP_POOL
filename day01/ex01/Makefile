compile = clang++ -Werror -Wextra -Wall
src = *.cpp
Name = zombieHorde

all : $(Name)

$(Name):
	@$(compile) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
fclean: clean

re: fclean all

.PHONY: all clean fclean re