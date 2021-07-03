compile = clang++ --std=c++98 -Wall -Wextra -Werror
src = *.cpp
Name = BureaucratForm

all: $(Name)

$(Name):
	@$(compile) $(src) -o $(Name)
clean:
	@rm -rf $(Name)
	@rm -rf *_shrubbery
fclean: clean

re: fclean all

.PHONY: all clean fclean re